/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:02:24 by swoman            #+#    #+#             */
/*   Updated: 2019/02/14 22:16:19 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		file_open(char *av)
{
	int descriptor;

	descriptor = open(av, O_RDWR);
	if (descriptor < 0)
	{
		ft_putstr("cat: ");
		ft_putstr(av);
		if (errno == ENOENT)
			ft_putstr(": No such file or directory\n");
		if (errno == EPERM)
			ft_putstr(":Permission denied\n");
		if (errno == EISDIR)
			ft_putstr(": Is a directory\n");
		return (-1);
	}
	return (descriptor);
}

void	read_dscrptr(void)
{
	int		rd_dscrptr;
	char	buf[BUF_SIZE + 1];

	while (1)
	{
		rd_dscrptr = read(0, buf, BUF_SIZE);
		write(1, buf, rd_dscrptr);
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		descriptor;
	int		rd_dscrptr;
	char	buf[BUF_SIZE + 1];

	i = 0;
	if (ac == 1)
		read_dscrptr();
	while (++i < ac)
	{
		if (av[i][0] == '-' && ft_strlen(av[i]) == 1)
			read_dscrptr();
		descriptor = file_open(av[i]);
		if (descriptor >= 0)
		{
			while ((rd_dscrptr = read(descriptor, buf, BUF_SIZE)) > 0)
			{
				buf[rd_dscrptr] = '\0';
				ft_putstr(buf);
			}
			close(descriptor);
		}
	}
	return (0);
}
