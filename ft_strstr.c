/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:00:41 by irhett            #+#    #+#             */
/*   Updated: 2016/11/15 15:13:05 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		index;
	char	*temp;

	if (*little == '\0')
		return ((char*)big);
	while (*big != '\0')
	{
		index = 0;
		if (little[index] == big[index])
		{
			temp = (char*)big;
			while (little[index] == big[index])
			{
				index++;
				if (little[index] == '\0')
					return (temp);
			}
		}
		big++;
	}
	return (NULL);
}
