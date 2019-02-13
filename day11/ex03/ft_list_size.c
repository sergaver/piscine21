/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:36:30 by swoman            #+#    #+#             */
/*   Updated: 2019/02/13 21:02:13 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	l_list	*tmp;
	int		i;

	tmp = begin_list;
	i = 0;
	if (begin_list != 0)
	{
		while (tmp->next != 0)
		{
			tmp = tmp->next;
			i++;
		}
		i++;
	}
	return (i);
}
