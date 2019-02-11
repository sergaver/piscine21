/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_horizont.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 13:26:59 by mahai             #+#    #+#             */
/*   Updated: 2019/02/10 20:25:53 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_horizont(char **point, int i, int j, char dig)
{
	int c_run_horizontal;

	(void)j;
	c_run_horizontal = 0;
	while (c_run_horizontal < 9)
	{
		if (dig == point[i][c_run_horizontal])
			return (0);
		c_run_horizontal++;
	}
	return (1);
}
