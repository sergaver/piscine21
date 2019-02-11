/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 20:08:35 by swoman            #+#    #+#             */
/*   Updated: 2019/02/05 20:44:01 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				div;
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	if (s1[i] != s2[i])
	{
		div = s1[i] - s2[i];
		return (div);
	}
	else
		return (0);
}