/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:20:53 by swoman            #+#    #+#             */
/*   Updated: 2019/02/13 22:00:55 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
	}
	tmp = ft_create_elem(data);
	tmp->next = *begin_list;
	*begin_list = tmp;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = 0;
	while (i < ac)
	{
		ft_list_push_front(&tmp, av[i]);
		i++;
	}
	return (tmp);
}
