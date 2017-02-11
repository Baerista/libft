/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 18:35:06 by irhett            #+#    #+#             */
/*   Updated: 2016/11/15 16:22:07 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	target;

	target = c;
	while (n > 0)
	{
		if (*(unsigned char*)(s) == target)
			return ((void*)s);
		s++;
		n--;
	}
	return (NULL);
}
