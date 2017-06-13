##
## Makefile for  in /home/amoraa/Delivery/rush/CPE_2016_stumper3
## 
## Made by Florian Testu
## Login   <florian.testu@epitech.eu>
## 
## Started on  Wed May  3 17:24:05 2017 Florian Testu
## Last update Wed May  3 20:05:18 2017 Antonin Hattabe
##

CC	=	gcc -g3

NAME	=	mixword

SRC	=	src/main.c		\
		src/algo2.c		\
		src/aff.c		\
		src/builtin2.c		\
		src/data.c		\
		src/builtin.c		\
		src/parser.c		\
		src/check_file.c	

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f	$(OBJ)

fclean: clean
	rm -f	$(NAME)

re: fclean all

.phony: clean fclean all re
