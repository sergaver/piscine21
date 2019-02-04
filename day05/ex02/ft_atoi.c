/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:18:25 by swoman            #+#    #+#             */
/*   Updated: 2019/02/04 16:15:54 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int number;
	int sign;

	number = 0;
	sign = 1;
	while (*str != '\0')
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		if (*str == ' ')
			str++;
		if (*str >= '0' && *str <= '9')
		{
			number = number * 10 + (*str - '0');
			str++;
		}
		else
			return (0);
	}
	number *= sign;
	return (number);
}
