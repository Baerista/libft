/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:26:05 by irhett            #+#    #+#             */
/*   Updated: 2016/11/21 19:26:54 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		swap(int *arr, unsigned int i1, unsigned int i2)
{
	int temp;

	temp = arr[i1];
	arr[i1] = arr[i2];
	arr[i2] = temp;
}

void			ft_sortints(int *arr, unsigned int arr_len)
{
	unsigned int	i;

	i = 0;
	if (arr && arr_len)
	{
		while (i < arr_len)
		{
			if ((i == 0) || (arr[i] >= arr[i - 1]))
				i++;
			else
			{
				swap(arr, i, (i - 1));
				i--;
			}
		}
	}
}
