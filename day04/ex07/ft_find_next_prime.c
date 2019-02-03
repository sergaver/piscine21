/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:07:12 by swoman            #+#    #+#             */
/*   Updated: 2019/02/02 23:38:25 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int delitel;

	if (nb <= 1)
	{
		return (0);
	}
	delitel = nb - 1;
	while (1)
	{
		if (delitel == 1)
		{
			return (1);
		}
		if ((nb % delitel) == 0)
		{
			return (0);
		}
		delitel--;
	}
}

int		ft_find_next_prime(int nb)
{
	int next_p;

	next_p = nb;
	if (ft_is_prime(nb) != 1)
	{
		while (ft_is_prime(nb) < 1)
		{
			nb++;
		}
		return (nb);
	}
	return (0);
}
