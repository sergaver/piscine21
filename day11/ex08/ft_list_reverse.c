/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 22:11:07 by swoman            #+#    #+#             */
/*   Updated: 2019/02/13 22:17:55 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *pre;
	t_list *cur;
	t_list *next;

	while (cur != 0)
	{
		next = cur->next;
		cur = next->pre;
		pre = cur;
		cur = next;
	}
	*begin_list = pre;
}
