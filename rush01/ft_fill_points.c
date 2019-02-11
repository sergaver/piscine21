/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_points.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 15:13:24 by mahai             #+#    #+#             */
/*   Updated: 2019/02/10 20:00:17 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	check_full(char **point, int i, int j)
{
	char	dig;
	char	writenum;
	int		d_qty;

	dig = '1';
	d_qty = 0;
	while (dig <= '9')
	{
		if (ft_check_horizont(point, i, j, dig) == 1
		&& ft_check_vertical(point, i, j, dig) == 1
		&& ft_check_square(point, i, j, dig) == 1
		&& ft_check_4(point, i, j, dig) == 1
		&& point[i][j] == '.')
		{
			d_qty++;
			writenum = dig;
		}
		dig++;
	}
	if (d_qty == 1 && point[i][j] == '.')
		ft_write_point(point, i, j, writenum);
}

void	ft_fill_points(char **point)
{
	int i;
	int j;
	int c;

	i = 0;
	j = 8;
	c = 1;
	while (c < 82)
	{
		i = 0;
		while (i < 9)
		{
			j = 0;
			while (j < 9)
			{
				check_full(point, i, j);
				j++;
			}
			i++;
		}
		c++;
	}
}
