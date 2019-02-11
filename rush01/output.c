/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyrande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:29:13 by btyrande          #+#    #+#             */
/*   Updated: 2019/02/09 16:14:11 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_output_str(char *str)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i == 2 || i == 5)
		{
			write(1, &str[i], 1);
			write(1, " | ", 3);
			i++;
		}
		else if (i != 8)
		{
			write(1, &str[i], 1);
			write(1, " ", 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			write(1, "\n", 1);
			i++;
		}
	}
}

void	ft_output_temp(void)
{
	int i;

	i = 0;
	while (i < 20)
	{
		write(1, "-", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_output(char **argv)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i == 2 || i == 5)
		{
			ft_output_str(argv[i]);
			ft_output_temp();
			i++;
		}
		else if (i != 8)
		{
			ft_output_str(argv[i]);
			i++;
		}
		else
		{
			ft_output_str(argv[i]);
			i++;
		}
	}
}
