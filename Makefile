##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC =	window.c	\
		init.c	\
		func_base.c	\
		destruct.c	\
		sprite.c	\
		event.c

OBJ = $(SRC:.c=.o)

NAME = my_hunter

SVFL = *~

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-audio -l csfml-window -l csfml-system -Wall -Wextra

clean:
	rm -rf $(SVFL)

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all

launch: re
	./$(NAME)

.PHONY: all clean fclean re launch
