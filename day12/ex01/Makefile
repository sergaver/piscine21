# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swoman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/14 18:20:51 by swoman            #+#    #+#              #
#    Updated: 2019/02/14 21:30:24 by swoman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

OUT = ft_cat.o functions.o

FLAGS = -Wextra -Wall -Werror

$(NAME): $(OUT)
		gcc $(FLAGS) $(OUT) -o $(NAME)

ft_cat.o: ft_cat.c
	gcc $(FLAGS) -c ft_cat.c -I ft_cat.h

functions.o: functions.c
		gcc $(FLAGS) -c functions.c -I ft_cat.h

all: $(NAME)

clean:
		/bin/rm -f $(OUT)

fclean: clean
		/bin/rm -f $(NAME)

re:	fclean all
