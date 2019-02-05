/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:52:26 by swoman            #+#    #+#             */
/*   Updated: 2019/02/05 19:58:23 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = 0;
	while (to_find[size] != '\0')
	{
		size++;
	}
	while (str[i] != '\0')
	{
		while (to_find[j] == str[j + i])
			j++;
		if (j == size)
			return (str + i);
		i++;
	}
	return (NULL);
}
