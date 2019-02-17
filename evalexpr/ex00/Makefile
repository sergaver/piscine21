# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swoman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 12:46:01 by swoman            #+#    #+#              #
#    Updated: 2019/02/17 19:08:39 by swoman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = eval_expr


SRC += main.c
SRC += ft.c
SRC += evalexpr.c


OBJ  = $(SRC:.c=.o)


all: $(NAME)


$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc $(OBJ) -o $(NAME)


clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)


re: fclean all
