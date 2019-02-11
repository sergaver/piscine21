/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyrande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:54:56 by btyrande          #+#    #+#             */
/*   Updated: 2019/02/10 20:32:09 by btyrande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_output_str(char *str);
void	ft_output_temp(void);
void	ft_output(char **argv);
void	ft_fill_points(char **point);
int		ft_check_horizont(char **point, int i, int j, char dig);
int		ft_check_square(char **point, int i, int j, char dig);
int		ft_check_vertical(char **point, int i, int j, char dig);
void	ft_output(char **argv);
char	**ft_array(char **argv);
void	ft_write_point(char **point, int i, int j, char dig);
int		ft_check_4(char **array, int i, int j, char dig);
int		ft_s_check(char **array);
int		ft_s_check_col(char **array, int line, int col);
int		ft_s_check_line(char **array, int line, int col);

#endif
