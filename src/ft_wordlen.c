/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2017/02/11 15:24:11 by irhett            #+#    #+#             */
/*   Updated: 2017/02/11 15:26:09 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_wordlen(char *s, char del)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (s[i] == del)
		i++;
	while (s[i] != del)
	{
		if (s[i] == '\0')
			return (len);
		i++;
		len++;
	}
	return (len);
}
