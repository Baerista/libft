/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 12:40:25 by irhett            #+#    #+#             */
/*   Updated: 2016/11/21 16:23:39 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_a_letter(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

static void		correct_letters(int is_first, char *c, int i)
{
	if (is_first)
	{
		if ((c[i] >= 'a') && (c[i] <= 'z'))
		{
			c[i] = ((c[i] - '0') - 32) + '0';
		}
	}
	else
	{
		if ((c[i] >= 'A') && (c[i] <= 'Z'))
		{
			c[i] = ((c[i] - '0') + 32) + '0';
		}
	}
}

char			*ft_strcapitalize(char *str)
{
	int index;
	int is_first;

	index = 0;
	is_first = 1;
	if (str)
	{
		while (str[index] != '\0')
		{
			if (!is_a_letter(str[index]))
			{
				is_first = 1;
			}
			else
			{
				correct_letters(is_first, str, index);
				is_first = 0;
			}
			index++;
		}
	}
	return (str);
}
