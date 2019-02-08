/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 22:25:32 by swoman            #+#    #+#             */
/*   Updated: 2019/02/07 23:07:32 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		separator(char *str, int *words)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*str > 32)
		{
			count = 0;
			while (*str > 32)
			{
				str++;
				count++;
			}
			*(words + i) = count;
			i++;
		}
	}
	*(words + i) = '\0';
	return (i);
}

void	arr_prepare(char *str, char **a, int *words, int num)
{
	int n;
	int i;
	int j;

	n = 0;
	i = 0;
	j = 0;
	while (n < num)
	{
		if (str[i] > 32 && n < num)
		{
			j = 0;
			while (str[i] > 32 && j < words[n])
			{
				a[n][j] = str[i];
				j++;
				i++;
			}
			a[n][j] = '\0';
			n++;
		}
		i++;
	}
	a[n] = "\0";
}

char	**ft_split_whitespaces(char *str)
{
	int		num;
	char	**a;
	int		words[1000];
	int		n;

	n = 0;
	num = separator(str, words);
	if (!(a = (char**)malloc(sizeof(char*) * (num + 1))))
		return (NULL);
	while (n < num)
	{
		if (!(a[n] = (char*)malloc(sizeof(char) * (words[n] + 1))))
			return (NULL);
		n++;
	}
	arr_prepare(str, a, words, num);
	return (a);
}
