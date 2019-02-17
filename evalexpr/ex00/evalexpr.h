/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 12:45:36 by swoman            #+#    #+#             */
/*   Updated: 2019/02/17 13:35:14 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int    get_number(char **expr);
int    get_bracket(char **expr);
int    get_summ(char **expr);
int    eval_expr(char *expr);

#endif
