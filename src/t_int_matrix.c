/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_int_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 19:40:02 by irhett            #+#    #+#             */
/*   Updated: 2017/03/09 20:27:37 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define T (*t)

void			del_int_matrix(t_int_matrix *t)
{
	unsigned int	i;

	if (t)
	{
		if (T.data)
		{
			i = -1;
			while (++i < T.rows)
			{
				if (T.data[i])
				{
					ft_bzero(T.data[i], sizeof(int) * T.cols);
					free(T.data[i]);
				}
				else
					ft_error("Row in del_int_matrix() is NULL");
			}
			ft_bzero(T.data, sizeof(int*) * T.rows);
			free(T.data);
		}
		ft_bzero(t, sizeof(t_int_matrix));
		free(t);
		t = NULL;
	}
	else
		ft_error("Passed NULL to del_int_matrix()");
}

t_int_matrix	*init_int_matrix(void)
{
	t_int_matrix	*t;

	t = (t_int_matrix*)malloc(sizeof(t_int_matrix));
	if (!t)
	{
		ft_error("Unable to allocate memory for t_int_matrix");
		return (NULL);
	}
	ft_bzero(t, sizeof(t_int_matrix));
	return (t);
}

t_int_matrix	*make_int_matrix(unsigned int rows, unsigned int cols)
{
	t_int_matrix	*t;

	t = init_int_matrix();
	if (!t)
		return (NULL);
	T.data = (int**)malloc(sizeof(int*) * rows);
	if (!T.data)
	{
		ft_error("Unable to allocate memory for data in t_int_matrix");
		del_int_matrix(t);
		return (NULL);
	}
	ft_bzero(T.data, sizeof(int*) * rows);
	while (T.rows < rows)
	{
		T.data[T.rows] = (int*)malloc(sizeof(int) * cols);
		if (!T.data[T.rows])
		{
			ft_error("Unable to allocate memory for row in t_init_matrix");
			del_int_matrix(t);
			return (NULL);
		}
		ft_bzero(T.data[T.rows], sizeof(int) * cols);
		T.rows++;
	}
	return (t);
}
