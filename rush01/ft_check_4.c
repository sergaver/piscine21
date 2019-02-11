/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_horizont.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 13:26:59 by mahai             #+#    #+#             */
/*   Updated: 2019/02/10 20:18:05 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_digits(char **array, int i, int j, char *str)
{
	int k;
	int m;

	k = 0;
	while (k < 3)
	{
		m = 0;
		while (m < 3)
		{
			if (array[i + k][j + m] != '.')
				str[3 * k + m] = 1;
			m++;
		}
		k++;
	}
	k = 0;
	while (k < 9)
	{
		if (str[k] == '0')
			counter++;
		k++;
	}
	return (counter);
}

int		ft_check_4(char **array, int i, int j, char dig)
{
	char	str[10];
	int		k;

	str = "000000000";
	k = 0;
	while (k < 3)
	{
		if (ft_check_horizont(array, (i / 3 * 3) + k, j, dig) == 0)
		{
			str[3 * k] = '1';
			str[3 * k + 1] = '1';
			str[3 * k + 2] = '1';
		}
		if (ft_check_vertical(array, i, (j / 3 * 3) + k, dig) == 0)
		{
			str[k] = '1';
			str[k + 3] = '1';
			str[k + 6] = '1';
		}
		k++;
	}
	if (check_digits(array, i, j, str) == 1)
		return (1);
	return (0);
}
