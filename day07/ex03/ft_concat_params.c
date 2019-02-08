/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 20:31:03 by swoman            #+#    #+#             */
/*   Updated: 2019/02/07 20:48:18 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *scr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (scr[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		count;
	int		i;

	count = 0;
	i = 1;
	while (i < argc)
	{
		count += ft_strlen(argv[i]);
		i++;
	}
	str = (char *)malloc(sizeof(*str) * count + i + 1);
	i = 1;
	*str = '\0';
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i + 1 < argc)
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
