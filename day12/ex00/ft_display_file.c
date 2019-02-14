/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:47:51 by swoman            #+#    #+#             */
/*   Updated: 2019/02/14 17:45:33 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4864

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		file_open(int ac, char **av)
{
	if (ac <= 1)
	{
		ft_putstr("File name missing.\n");
		return (-1);
	}
	if (ac == 2)
	{
		return (open(av[1], O_RDWR));
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (-1);
	}
	return (-1);
}

int		main(int ac, char **av)
{
	int		descriptor;
	char	buf[BUF_SIZE + 1];
	int		rd_descriptor;

	descriptor = file_open(ac, av);
	if (descriptor >= 0)
	{
		while ((rd_descriptor = read(descriptor, buf, BUF_SIZE)) > 0)
		{
			buf[rd_descriptor] = '\0';
			ft_putstr(buf);
		}
		close(descriptor);
	}
	return (0);
}
