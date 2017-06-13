/*
** headers.h for tictactoe in /home/Berzerk
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Tue May 23 17:06:10 2017 Antonin Hattabe
** Last update Tue May 23 20:55:16 2017 Florian Testu
*/

#ifndef HEADERS_H_
# define HEADERS_H_

#include <unistd.h>
#include <stdlib.h>

typedef struct	s_tab
{
  char	p_one;
  char	p_two;
  int	size;
  char	**map;
}		t_tab;

int	my_strlen(char *);
int	my_getnbr(char *);
int	my_strcmp(char *, char *);
int	check_win(t_tab *);
int	print_win(int);
int	verif_win_ligne(t_tab *);
int	verif_win_colon(t_tab *);
int	verif_win_diago1(t_tab *);
int	verif_win_diago2(t_tab *);
int	begin_dafault(t_tab);
int	game(t_tab);
int	check_argv2(t_tab *, char **, int);
int	begin_default(t_tab);

char	*create_map_ligne(t_tab *);
char	*get_next_line(int);

char	**create_map(t_tab *);

void	aff_map(t_tab *);
void	my_putchar(char);
void	my_putstr(char *);
void	print_map(char **);

#endif
