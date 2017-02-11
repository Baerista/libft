/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 15:17:03 by irhett            #+#    #+#             */
/*   Updated: 2017/02/11 15:05:11 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		scan(char *str, int newline)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '\n' && newline)
			return (index);
		index++;
	}
	if (newline)
		return (-1);
	return (index);
}

static int		copy(char *src, char **dst, char **stat, int fd)
{
	int		index;
	int		len;
	int		ret;

	ret = 0;
	len = 0;
	while ((src[len] != '\n') && (src[len] != '\0'))
		len++;
	dst[0] = (char*)malloc(sizeof(char) * len + 1);
	index = 0;
	while ((src[index] != '\n') && (src[index] != '\0'))
	{
		dst[0][index] = src[index];
		index++;
	}
	dst[0][index] = '\0';
	if (src[index] == '\n')
	{
		ret = 1;
		stat[fd] = gnl_concat(&(src[++index]), "", 0, 0);
	}
	free(src);
	return (ret);
}

static int		cleanup(char **stat, int fd, char *buff, char *ret)
{
	if (stat[fd])
		free(stat[fd]);
	free(buff);
	free(ret);
	return (-1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*stat[15000];
	int				br;
	char			*buffer;
	char			*ret;

	br = 1;
	if (fd < 0 || (line == NULL) || BUFF_SIZE <= 0)
		return (-1);
	if (stat[fd] != NULL)
		ret = gnl_concat(stat[fd], "", 1, 0);
	else
		ret = gnl_concat("", "", 0, 0);
	stat[fd] = NULL;
	while ((scan(ret, 1) == -1) && br)
	{
		buffer = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1));
		br = read(fd, buffer, BUFF_SIZE);
		if (br == -1)
			return (cleanup(stat, fd, buffer, ret));
		buffer[br] = '\0';
		ret = gnl_concat(ret, buffer, 1, 1);
	}
	if ((copy(ret, line, stat, fd) == 0) && (br == 0) && (scan(ret, 0) == 0))
		return (0);
	return (1);
}
