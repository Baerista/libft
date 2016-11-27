/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:36:22 by irhett            #+#    #+#             */
/*   Updated: 2016/11/19 23:35:18 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	d_len;

	d = 0;
	s = 0;
	while (dst[d] && size)
	{
		size--;
		d++;
	}
	d_len = d;
	if (size == 0)
		return (d_len + ft_strlen(src));
	while (src[s])
	{
		if (size != 1)
		{
			dst[d++] = src[s];
			size--;
		}
		s++;
	}
	dst[d] = '\0';
	return (d_len + s);
}
