/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:42:10 by swoman            #+#    #+#             */
/*   Updated: 2019/02/12 21:02:50 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_sign_plus(int a, int b)
{
	ft_putnbr(a + b);
	ft_putstr("\n");
}

void	ft_sign_minus(int a, int b)
{
	ft_putnbr(a - b);
	ft_putstr("\n");
}

void	ft_sign_mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putstr("\n");
}

void	ft_sign_div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : devision by zero\n");
	else
	{
		ft_putnbr(a / b);
		ft_putstr("\n");
	}
}

void	ft_sign_mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(a % b);
		ft_putstr("\n");
	}
}
