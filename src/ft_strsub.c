/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:00:29 by irhett            #+#    #+#             */
/*   Updated: 2016/11/20 12:10:25 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;

	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str && s)
	{
		index = 0;
		while (index < len)
		{
			str[index] = s[start + index];
			index++;
		}
		str[index] = '\0';
	}
	return (str);
}
