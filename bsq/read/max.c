/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:19:57 by swoman            #+#    #+#             */
/*   Updated: 2019/02/19 21:16:09 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct		s_point
{
	int column;
	int line;
	int v;
}					current;

int		c_m(int a, int b, int c)
{
	if (a < b && a < c)
		return (a);
	if (b < a && b < c)
		return (b);
	if (c < a && c < b)
		return (c);
	return (0);
}

current		filling(char f, int i, int l, int string, current *b, char *s)
{
	if (string > 1 && b[i].column != 1)
		b[i].v = (*s == f) ? c_m(b[i - l - 1].v, b[i - l].v, b[i - 1].v) : 0;
	else
		b[i].v = (*s == f) ? 1 : 0;
	//printf("\nb[%d].v = %d, string = %d, b[%d].column = %d", i, b[i].v, string, i, b[i].column);
	return (*b);
}

current		rewrite(int i, int l, current *b)
{
	while (i >= 2 * l)
	{
		b[i - 2 * l] = b[i];
		i--;
	}
	return (*b);
}

current	max(char f, int l, int string, char *s)
{
	int		line;
	int		i;
	current b[2 * l];
	current largest;

	i = 0;
	line = 1;
	while (*s)
	{
		while (i <= 2 * l - 1 && *s)
		{
			line = (i < l) ? 1 : 2;
			b[i].column = (line == 1) ? i + 1 : i + 1 - l;
			filling(f, i, l, string, b, s);
			largest = (b[i].v > largest.v) ? b[i] : largest;
			b[i].line = string;
			i++;
			s++;
		}
		printf("\n");
		rewrite(i, l, b);
		printf("\nlargest.v = %d, largest.line = %d, largest.column = %d,\nb[%d].line = %d, \
line = %d\n",largest.v, largest.line, largest.column, i, b[i].line, line);
		i = l;
		string += (line == 2) ? 1 : 0;
		line = 1;
	}
	return (largest);
}

int		main(void)
{
	char	*s;
	char	f;
	int		l;
	int		string;
	current largest;

	s = "...o.\n.....\n";
	f = '.';
	l = 5;
	string = 1;
	max(f, l, string, s);
	printf("\n");
	printf("%d\n%d\n%d", largest.column, largest.line, largest.v);
	return (0);
}
