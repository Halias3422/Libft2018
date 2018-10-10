# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/03 17:34:31 by vde-sain     #+#   ##    ##    #+#        #
#    Updated: 2018/10/04 14:47:16 by vde-sain    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

OBJ = *.o

INCLUDE = libft.h

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		ar rcs $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
