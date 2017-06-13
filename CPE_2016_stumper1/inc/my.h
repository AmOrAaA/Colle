/*
** inc.h for  in /home/AmOrAA/CPE_2016_stumper1/inc
**
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
**
** Started on  Tue Apr 18 15:56:44 2017 Florian Testu
** Last update Tue Apr 18 19:00:16 2017 Florian Testu
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	my_putchar(char);
void	my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
int	all_check(int, char **);
void	pattern_2(char *, char *, char **);
char	**create_motif(int );
char	**str_to_wtab(char *);

#endif
