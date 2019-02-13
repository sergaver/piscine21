/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:22:41 by swoman            #+#    #+#             */
/*   Updated: 2019/02/13 19:42:07 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	tmp = *begin_list;
	while (tmp->next != 0)
		tmp = tmp->next;
	tmp->next = ft_create_elem(data);
}
