/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:33:31 by irhett            #+#    #+#             */
/*   Updated: 2016/11/11 19:47:29 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_white_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int		is_a_number(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

static void		is_a_number_block(int *is_neg, int *num, char *str, int i)
{
	if (*is_neg > 0)
	{
		*num *= 10;
		if ((*is_neg == 1) && (str[i] != '0'))
		{
			*num += (str[i] - '0');
			*is_neg = 2;
			*num *= -1;
		}
		else
			*num -= (str[i] - '0');
	}
	else
	{
		*num *= 10;
		*num += (str[i] - '0');
	}
}

static int		my_atoi(char *str, int index, int number, int is_negative)
{
	while (is_white_space(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			is_negative++;
		index++;
	}
	while (str[index] != '\0')
	{
		if (is_a_number(str[index]))
			is_a_number_block(&is_negative, &number, str, index);
		else
			return (number);
		index++;
	}
	return (number);
}

int				ft_atoi(char *str)
{
	return (my_atoi(str, 0, 0, 0));
}
