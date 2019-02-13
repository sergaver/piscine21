/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:53:36 by swoman            #+#    #+#             */
/*   Updated: 2019/02/13 21:59:30 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *next;

	tmp = *begin_list;
	while (tmp != 0)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*begin_list = 0;
}
