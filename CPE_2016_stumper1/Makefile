##
## Makefile for  in /home/AmOrAA/CPE_2016_stumper1
##
## Made by Florian Testu
## Login   <AmOrAA@epitech.net>
##
## Started on  Tue Apr 18 15:11:37 2017 Florian Testu
## Last update Tue Apr 18 19:02:49 2017 Florian Testu
##

CC =	gcc

NAME =	fractals

SRC =	src/fonc.c			\
	src/main.c			\
	src/pattern_3.c			\
	src/check_all.c			\
	src/create_pattern.c		\
	src/my_str_to_wordtab.c	

OBJ =	$(SRC:.c=.o)

CFLAGS = -W -Wall

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
