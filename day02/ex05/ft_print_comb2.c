/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 19:39:37 by swoman            #+#    #+#             */
/*   Updated: 2019/01/31 21:55:42 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putchar_converted(int n)
{
	char c;

	c = n + '0';
	ft_putchar(c);
}

int		divmod(int x, int y)
{
	putchar_converted(x / 10);
	putchar_converted(x % 10);
	ft_putchar(' ');
	putchar_converted(y / 10);
	putchar_converted(y % 10);
	if (((x / 10 != 9) || (y % 10 != 8)) && (x < 98))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else if (x >= 90 && x < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (x);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			divmod(x, y);
			y = y + 1;
		}
		x = x + 1;
	}
}
