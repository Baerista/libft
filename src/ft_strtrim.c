/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:30:08 by irhett            #+#    #+#             */
/*   Updated: 2017/02/11 15:14:45 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(*s))
		s++;
	if (*s != '\0')
	{
		len = ft_strlen((char*)s);
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
