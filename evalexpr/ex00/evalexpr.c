/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 12:45:11 by swoman            #+#    #+#             */
/*   Updated: 2019/02/17 22:40:16 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include "evalexpr.h"

int            get_summ(char **expr)
{
    int        number;
    int        chislo;
    char    action;

    number = get_bracket(expr);
    while (**expr)
    {
        while (**expr == ' ')
            (*expr)++;
        action = **expr;
        if (action != '+' && action != '-')
            return (number);
        (*expr)++;
        chislo = get_bracket(expr);
        if (action == '+')
            number = number + chislo;
        else
            number = number - chislo;
    }
    return (number);
}

int            get_bracket(char **expr)
{
    int        number;
    int        chislo;
    char    action;

    number = get_number(expr);
    while (**expr)
    {
        while (**expr == ' ')
            (*expr)++;
        action = **expr;
        if (action != '/' && action != '*' && action != '%')
            return (number);
        (*expr)++;
        chislo = get_number(expr);
        if (action == '/')
            number = number / chislo;
        else if (action == '*')
            number = number * chislo;
        else if (action == '%')
            number = number % chislo;
    }
    return (number);
}

int            get_number(char **expr)
{
    int        number;

    while (**expr == ' ')
        (*expr)++;
    if (**expr == '(')
    {
        (*expr)++;
        number = get_summ(expr);
        if (**expr == ')')
            (*expr)++;
        return (number);
    }
    return (ft_atoi(expr));
}

int            eval_expr(char *expr)
{
    return (get_summ(&expr));
}
