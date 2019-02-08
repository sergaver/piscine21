/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 20:07:03 by swoman            #+#    #+#             */
/*   Updated: 2019/02/07 20:21:45 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_range(int **range, int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
	{
		*range = 0;
		return (NULL);
	}
	i = 0;
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	arr[i] = '\0';
	*range = arr;
	return (i);
}
