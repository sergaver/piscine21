/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:14:45 by swoman            #+#    #+#             */
/*   Updated: 2019/02/13 20:35:30 by swoman           ###   ########.fr       */
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
