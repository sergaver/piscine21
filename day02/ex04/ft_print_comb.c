/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:01:02 by swoman            #+#    #+#             */
/*   Updated: 2019/01/31 18:49:23 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putchar_converted(int n)
{
	char c;

	c = n + '0';
	ft_putchar(c);
}

int		last_num(int x, int y)
{
	int z;

	z = 3;
	while (z <= 9)
	{
		if (x < y && y < z && x != z)
		{
			ft_putchar(',');
			ft_putchar(' ');
			putchar_converted(x);
			putchar_converted(y);
			putchar_converted(z);
			z++;
		}
		else
		{
			z++;
		}
	}
	return (z);
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 1;
	ft_putchar('0');
	ft_putchar('1');
	ft_putchar('2');
	while (x <= 7)
	{
		while (y <= 8)
		{
			last_num(x, y);
			z = 0;
			y++;
		}
		y = 0;
		x++;
	}
	ft_putchar('\n');
}
