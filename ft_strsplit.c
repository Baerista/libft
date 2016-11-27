/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:46:27 by irhett            #+#    #+#             */
/*   Updated: 2016/11/20 23:09:00 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		num_words(char *s, char c)
{
	unsigned int	num;
	unsigned int	i;

	num = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			num++;
		i++;
	}
	return (num);
}

static unsigned int		str_len(char *s, char c)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (len);
		i++;
		len++;
	}
	return (len);
}

static char				**sub_split(char c, char *temp, unsigned int num)
{
	unsigned int	x;
	unsigned int	y;
	char			**ans;

	if (!(ans = (char **)malloc(sizeof(char*) * (num + 1))))
		return (NULL);
	x = 0;
	while (x < num)
	{
		y = 0;
		ans[x] = (char*)malloc(sizeof(char) * (str_len(temp, c) + 1));
		if (!ans[x])
			return (NULL);
		while (*temp == c)
			temp++;
		while ((*temp != c) && (*temp != '\0'))
			ans[x][y++] = *(temp++);
		ans[x++][y] = '\0';
	}
	ans[x] = NULL;
	return (ans);
}

char					**ft_strsplit(char const *s, char c)
{
	char			*temp;
	unsigned int	num;

	if (!s)
		return (NULL);
	temp = *((char**)&s);
	num = num_words(temp, c);
	return (sub_split(c, temp, num));
}
