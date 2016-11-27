/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:30:08 by irhett            #+#    #+#             */
/*   Updated: 2016/11/21 00:01:36 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_whitespace(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t'))
		return (1);
	return (0);
}

static size_t	get_len(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	while (is_whitespace(s[--len]))
		;
	return (len);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	if (!s)
		return (NULL);
	while (is_whitespace(*s))
		s++;
	if (*s != '\0')
	{
		len = get_len((char*)s);
		str = (char*)malloc(sizeof(char) * (len + 2));
		if (str)
			while (index <= len)
				str[index++] = *(s++);
	}
	else
		str = (char*)malloc(sizeof(char) * 1);
	if (str)
		str[index] = '\0';
	return (str);
}
