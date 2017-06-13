##
## Makefile for  in /home/amoraa/CPE_2016_stumper4
## 
## Made by Florian Testu
## Login   <florian.testu@epitech.eu>
## 
## Started on  Thu May 11 17:23:06 2017 Florian Testu
## Last update Thu May 11 20:42:58 2017 Florian Testu
##

CC 	=	gcc -g3

NAME 	=	fridge

SRC	=	src/main.c		\
		src/init.c		\
		src/builtin.c		\
		src/base_fonc.c		\
		src/my_str_to_wordtab.c	\
		src/food.c		\
		src/food2.c		\
		src/remp_fridg.c	\
		src/remp_fridg2.c	\
		src/main2.c		\
		src/add_food.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony:	clean fclean re
