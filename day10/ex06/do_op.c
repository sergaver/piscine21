/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:26:53 by swoman            #+#    #+#             */
/*   Updated: 2019/02/12 21:14:31 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signs.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	s;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	s = ft_atoi(argv[2]);
	if (s == 37 || s == 42 || s == 43 || s == 45 || s == 47)
	{
		if (s == '%')
			ft_sign_mod(a, b);
		if (s == '*')
			ft_sign_mul(a, b);
		if (s == '+')
			ft_sign_plus(a, b);
		if (s == '-')
			ft_sign_minus(a, b);
		if (s == '/')
			ft_sign_div(a, b);
		return (0);
	}
	ft_putstr("\n");
	return (0);
}
