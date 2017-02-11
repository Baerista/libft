/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:33:09 by irhett            #+#    #+#             */
/*   Updated: 2017/02/11 14:53:57 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		index;
	int		length;

	length = ft_strlen(s1);
	copy = (char*)malloc(sizeof(char) * (length + 1));
	index = 0;
	if (copy)
	{
		while (s1[index] != '\0')
		{
			copy[index] = s1[index];
			index++;
		}
		copy[index] = '\0';
	}
	return (copy);
}
