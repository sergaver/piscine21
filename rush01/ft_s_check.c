/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch_columns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 20:06:30 by mahai             #+#    #+#             */
/*   Updated: 2019/02/10 20:06:33 by mahai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_s_check(char **array)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (ft_s_check_line(array, i, i) == 0)
			return (0);
		if (ft_s_check_col(array, i, i) == 0)
			return (0);
		if (ch_simbols(array) == 0)
			return (0);
	}
	return (1);
}
