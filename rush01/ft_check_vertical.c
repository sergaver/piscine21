/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_vertical.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 13:27:09 by mahai             #+#    #+#             */
/*   Updated: 2019/02/10 20:23:02 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_vertical(char **point, int i, int j, char dig)
{
	int c_run_vertical;

	(void)i;
	c_run_vertical = 0;
	while (c_run_vertical < 9)
	{
		if (dig == point[c_run_vertical][j])
			return (0);
		c_run_vertical++;
	}
	return (1);
}
