/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 10:59:29 by irhett            #+#    #+#             */
/*   Updated: 2016/11/21 16:25:24 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	if (str)
	{
		while (str[index] != '\0')
		{
			if ((str[index] - '0' <= 122) && (str[index] - '0' >= 97))
			{
				str[index] = ((str[index] - '0') - 32) + '0';
			}
			index++;
		}
	}
	return (str);
}
