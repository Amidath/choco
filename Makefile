##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(SRC)
	gcc $(SRC) -lm -o $(NAME);

clean:
	rm -f *~
	rm -f *#

fclean: clean
	rm -f $(NAME)

re: fclean all
