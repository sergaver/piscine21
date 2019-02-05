/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 21:28:38 by swoman            #+#    #+#             */
/*   Updated: 2019/02/05 22:22:10 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57) ||
				(str[i] >= 97 && str[i] <= 122) ||
				(str[i] >= 65 && str[i] <= 90))
		{
			if (flag && (str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;
			else if (!flag && (str[i] >= 65 && str[i] <= 90))
				str[i] += 32;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
