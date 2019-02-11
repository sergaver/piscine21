/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 13:27:16 by mahai             #+#    #+#             */
/*   Updated: 2019/02/10 20:24:54 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_check_square(char **point, int i, int j, char dig)
{
	int coord_sq_h;
	int coord_sq_v;
	int c_run_horizontal;
	int c_run_vertical;

	coord_sq_v = i / 3;
	coord_sq_h = j / 3;
	c_run_horizontal = coord_sq_h * 3;
	c_run_vertical = coord_sq_v * 3;
	while (c_run_horizontal < coord_sq_h * 3 + 3)
	{
		c_run_vertical = coord_sq_v * 3;
		while (c_run_vertical < coord_sq_v * 3 + 3)
		{
			if (dig == point[c_run_vertical][c_run_horizontal])
				return (0);
			c_run_vertical++;
		}
		c_run_horizontal++;
	}
	return (1);
}
