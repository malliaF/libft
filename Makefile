# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/05 20:04:41 by mashafedoto       #+#    #+#              #
#    Updated: 2019/03/05 20:07:48 by mashafedoto      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./*.c

OBJ = ./*.o

INC = ./*.h


all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I$(INC) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all