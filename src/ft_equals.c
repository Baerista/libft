/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_equals.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 20:31:33 by irhett            #+#    #+#             */
/*   Updated: 2017/07/24 12:11:18 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** because F t_strcmp()
*/

int		ft_equals(char *s1, char *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}