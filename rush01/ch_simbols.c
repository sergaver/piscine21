/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch_simbols.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 20:06:57 by mahai             #+#    #+#             */
/*   Updated: 2019/02/10 20:06:58 by mahai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ch_simbols(int argc, char **argv)
{
	int i;
	int j;
	int check_chars;

	i = 1;
	j = 0;
	check_chars = 0;
	if (argc == 10)
	{
		while (i < argc)
		{
			while (argv[i][j] != '\0' && (argv[i][j] == 46 ||
						(argv[i][j] >= '1' && argv[i][j] <= '9')))
				j++;
			check_chars = (j == 9) ? check_chars + j : 0;
			j = 0;
			i++;
		}
	}
	if (check_chars == 81)
		return (1);
	return (0);
}
