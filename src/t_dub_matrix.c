/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_dub_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 20:20:01 by irhett            #+#    #+#             */
/*   Updated: 2017/03/09 20:29:50 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define T (*t)

void			del_dub_matrix(t_dub_matrix *t)
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
					ft_bzero(T.data[i], sizeof(double) * T.cols);
					free(T.data[i]);
				}
				else
					ft_error("Row in del_dub_matrix() is NULL");
			}
			ft_bzero(T.data, sizeof(double*) * T.rows);
			free(T.data);
		}
		ft_bzero(t, sizeof(t_dub_matrix));
		free(t);
		t = NULL;
	}
	else
		ft_error("Passed NULL to del_dub_matrix()");
}

t_dub_matrix	*init_dub_matrix(void)
{
	t_dub_matrix	*t;

	t = (t_dub_matrix*)malloc(sizeof(t_dub_matrix));
	if (!t)
	{
		ft_error("Unable to allocate memory for t_dub_matrix");
		return (NULL);
	}
	ft_bzero(t, sizeof(t_dub_matrix));
	return (t);
}

t_dub_matrix	*make_dub_matrix(unsigned int rows, unsigned int cols)
{
	t_dub_matrix	*t;

	t = init_dub_matrix();
	if (!t)
		return (NULL);
	T.data = (double**)malloc(sizeof(double*) * rows);
	if (!T.data)
	{
		ft_error("Unable to allocate memory for data in t_dub_matrix");
		del_dub_matrix(t);
		return (NULL);
	}
	ft_bzero(T.data, sizeof(double*) * rows);
	while (T.rows < rows)
	{
		T.data[T.rows] = (double*)malloc(sizeof(double) * cols);
		if (!T.data[T.rows])
		{
			ft_error("Unable to allocate memory for row in t_init_matrix");
			del_dub_matrix(t);
			return (NULL);
		}
		ft_bzero(T.data[T.rows], sizeof(double) * cols);
		T.rows++;
	}
	return (t);
}
