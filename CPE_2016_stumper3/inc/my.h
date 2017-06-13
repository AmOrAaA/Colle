/*
1;4600;0c** my.h for mixword in /home/Berzerk/CPE_2016_stumper3/inc/
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Wed May  3 17:39:13 2017 Antonin Hattabe
** Last update Wed May  3 20:15:37 2017 Antonin Hattabe
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

typedef struct	s_tab
{
  int	size;
  int	nb_w;
  int	nb_w_check;
  char	**tab;
}		t_tab;

void	my_putchar(char);
void	my_putstr(char *);
void	my_putnbr(int);
void	remp_data(t_tab *, char **, int, char **av);
void	aff_grid(t_tab *, char **);
void	aff_string_nb(t_tab *);

int	my_getnbr(char *);
int	parse_argv(int, char **);
int	my_strcmp(char *, char *);
int	my_isnum(char *);
int	parse_size_file(t_tab *, char **);
int	my_strlen(char *);
int	check_file(t_tab *);

char	*add_rdm(char **, int, int);
char	**algo(t_tab *, char **);

#endif /*MY_H_*/
