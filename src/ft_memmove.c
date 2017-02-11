/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:13:13 by irhett            #+#    #+#             */
/*   Updated: 2016/11/19 23:26:32 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;

	index = len;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (--index + 1)
			((unsigned char*)dst)[index] = ((unsigned char*)src)[index];
	return (dst);
}
