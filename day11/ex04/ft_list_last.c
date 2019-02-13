/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:05:46 by swoman            #+#    #+#             */
/*   Updated: 2019/02/13 21:19:21 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	tmp = begin_list;
	if (begin_list == 0)
		return (0);
	while (tmp->next != 0)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
