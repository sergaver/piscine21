/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 22:13:32 by swoman            #+#    #+#             */
/*   Updated: 2019/02/01 23:41:45 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		n;
	int		count;
	char	temp;

	n = 0;
	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	while (n < count)
	{
		temp = str[n];
		str[n] = str[count];
		str[count] = temp;
		count--;
		n++;
	}
	return (str);
}
