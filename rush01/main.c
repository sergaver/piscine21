/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyrande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:27:25 by btyrande          #+#    #+#             */
/*   Updated: 2019/02/10 20:30:38 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	char **array;

	array = ft_array(argv);
	if (ft_s_check(array) == 0)
	{
		write(1, "Error", 5);
		return (0);
	}
	ft_fill_points(array);
	ft_output(array);
	return (0);
}
