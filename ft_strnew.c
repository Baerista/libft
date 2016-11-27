/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:32:54 by irhett            #+#    #+#             */
/*   Updated: 2016/11/10 21:28:43 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	index;

	str = (char*)malloc(sizeof(char) * (size + 1));
	index = 0;
	if (str)
	{
		while (index <= size)
			str[index++] = '\0';
	}
	return (str);
}
