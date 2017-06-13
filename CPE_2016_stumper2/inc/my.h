/*
** my.h for  in /home/AmOrAA/CPE_2016_stumper2/CPE_2016_stumper2/inc
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Apr 25 15:57:50 2017 Florian Testu
** Last update Tue Apr 25 18:39:31 2017 Florian Testu
*/

#ifndef MY_H_
# define MY_H_

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void	my_putchar(char);
void	my_putstr(char *);
void	print_h();
void	aff_map(char **, int);
void	print_error_str(char *);

char	**check_tab(char **, int, int ,int);
char	**str_to_wtab(char *, int);

char	*check_word(char **, int, int ,char *);
char	*my_get_next_line(int);

int	check_size(char **, int, int ,int);
int	check_h(char **, int, int);
int	check_error(char *);
int	my_getnbr(char *);
int	search_word(char**, char*, int);

#endif
