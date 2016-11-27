/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 11:11:31 by irhett            #+#    #+#             */
/*   Updated: 2016/11/22 22:12:04 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tolowcase(char *str)
{
	int		index;

	index = 0;
	if (str)
	{
		while (str[index] != '\0')
		{
			if ((str[index] > '@') && (str[index] < '['))
			{
				str[index] = ((str[index] - '0') + 32) + '0';
			}
			index++;
		}
	}
}
