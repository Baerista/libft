/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:01:48 by irhett            #+#    #+#             */
/*   Updated: 2016/11/16 14:29:46 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *temp;

	temp = dst;
	while (len > 0)
	{
		if (*src != '\0')
		{
			*dst = *src;
			dst++;
			src++;
		}
		else
		{
			*dst = '\0';
			dst++;
		}
		len--;
	}
	return (temp);
}
