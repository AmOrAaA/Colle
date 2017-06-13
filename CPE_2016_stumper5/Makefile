##
## Makefile for  in /home/amoraa/CPE_2016_stumper5
## 
## Made by Florian Testu
## Login   <florian.testu@epitech.eu>
## 
## Started on  Thu May 18 17:03:05 2017 Florian Testu
## Last update Thu May 18 20:23:49 2017 Florian Testu
##

CC =	gcc  -Wall -Werror

NAME =	crocus

SRC =	src/main.c		\
	src/builtin.c		\
	src/create_final_tab.c	\
	src/create_struct_nb.c	\
	src/create_tab_nb.c	\
	src/create_tab_nb2.c	\
	src/custom_tab.c	\
	src/check_all.c

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
