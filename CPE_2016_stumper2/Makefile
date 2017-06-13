##
## Makefile for  in /home/AmOrAA/CPE_2016_stumper2/CPE_2016_stumper2
##
## Made by Florian Testu
## Login   <AmOrAA@epitech.net>
##
## Started on  Tue Apr 25 15:12:32 2017 Florian Testu
## Last update Tue Apr 25 18:46:01 2017 Florian Testu
##

CC =	gcc

NAME =	boggle

SRC =	src/main.c		\
	src/print.c		\
	src/algo.c		\
	src/my_get_next_line.c	\
	src/str_to_wtab.c	\
	src/all_check.c		\
	src/all_print.c		

OBJ =	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: clean fclean re
