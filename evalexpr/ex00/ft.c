/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 12:44:25 by swoman            #+#    #+#             */
/*   Updated: 2019/02/17 19:19:52 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int        ft_atoi(char **str)
{
    int    nbr;
    int    sign;

    nbr = 0;
    sign = 1;
    if (str == '\0')
        return (0);
    while (**str == '\t' || **str == '\v' || **str == '\n'
            || **str == '\r' || **str == '\f' || **str == ' ')
        (*str)++;
    if (**str == '-')
    {
        sign = -1;
        (*str)++;
    }
    if (**str == '+')
        (*str)++;
    while ((**str >= '0' && **str <= '9') && **str != '\0')
    {
        nbr = (nbr * 10) + (**str - '0');
        (*str)++;
    }
    return (nbr * sign);
}
