/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyrande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:37:39 by btyrande          #+#    #+#             */
/*   Updated: 2019/02/10 20:21:05 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_array(char **argv)
{
	char	**array;
	int		i;
	int		k;

	i = 0;
	if ((array = (char**)malloc(sizeof(char*) * 10)) == NULL)
		return (NULL);
	while (i < 9)
	{
		array[i] = (char*)malloc(sizeof(char*) * 10);
		i++;
	}
	i = 1;
	while (i < 10)
	{
		k = 0;
		while (k < 9)
		{
			array[i - 1][k] = argv[i][k];
			k++;
		}
		array[i - 1][k] = argv[i][k];
		i++;
	}
	return (array);
}
