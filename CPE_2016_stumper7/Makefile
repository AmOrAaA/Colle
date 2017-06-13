##
## Makefile for  in /home/amoraa/CPE_2016_stumper7
## 
## Made by Florian Testu
## Login   <florian.testu@epitech.eu>
## 
## Started on  Thu Jun  1 16:02:41 2017 Florian Testu
## Last update Thu Jun  1 19:53:01 2017 Antonin Hattabe
##

CC =	gcc -W -Wall

NAME =	text_count

SRC =	src/main.c		\
	src/aff.c		\
	src/builtin.c		\
	src/step_one.c		\
	src/step_two.c		\
	src/builtin2.c		\
	src/step_three.c	\
	src/param.c

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
