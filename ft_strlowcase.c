/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 11:11:31 by irhett            #+#    #+#             */
/*   Updated: 2016/11/21 20:14:21 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	if (str)
	{
		while (str[index] != '\0')
		{
			if (str[index] > '@') && (str[index] < '[')
			{
				str[index] = ((str[index] - '0') + 32) + '0';
			}
			index++;
		}
	}
	return (str);
}
