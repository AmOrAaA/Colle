##
## Makefile for  in /home/amoraa/CPE_2016_stumper6
## 
## Made by Florian Testu
## Login   <florian.testu@epitech.eu>
## 
## Started on  Tue May 23 17:05:42 2017 Florian Testu
## Last update Tue May 23 20:43:18 2017 Florian Testu
##

CC =	gcc -W -Wall

NAME =	tictactoe

SRC =	src/main.c		\
	src/fonc_simpl.c	\
	src/create_map.c	\
	src/aff.c		\
	src/builtin.c		\
	src/get_next_line.c	\
	src/verif_win.c		\
	src/begin_default.c	\
	src/game.c

OBJ =	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.phony: clean fclean re
