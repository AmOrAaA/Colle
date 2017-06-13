/*
** fridge.h for fridge in /home/Berzerk/CPE_2016_stumper4/include/
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Thu May 11 17:23:18 2017 Antonin Hattabe
** Last update Thu May 11 20:48:05 2017 Florian Testu
*/

#ifndef FRIDGE_H_
# define FRIDGE_H_

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct	s_tab
{
  int	tomato;
  int	dough;
  int	onion;
  int	pasta;
  int	olive;
  int	pepper;
  int	ham;
  int	cheese;
}		t_tab;

int	my_strcmp(char *, char *);
int	disp_fridge(t_tab *);
int	make_pizza(t_tab *);
int	make_pasta(t_tab *);
int	create_save(t_tab *);
int	check_tomato(t_tab *, int, int);
int	check_dough(t_tab *, int, int);
int	check_onion(t_tab *, int, int);
int	check_pasta(t_tab *, int, int);
int	check_olive(t_tab *, int, int);
int	check_pepper(t_tab *, int, int);
int	check_ham(t_tab *, int, int);
int	check_cheese(t_tab *, int, int);
int	my_getnbr(char *);
int	add_to_fridge(t_tab *, char *);
int	second_create(int, char *, t_tab *, int);
int	my_isnum(char *);

void	my_putstr(char *);
void	my_putnbr(int);
void	my_putnbrfd(int, int);
void	init_struct(t_tab *);
void	my_put_str(char *);
void	my_putchar(char);
void	add_to_fridge2(t_tab *, int, char **);

char	**my_str_to_wordtab2(char *);
char	**my_str_to_wordtab(char *);

char    *remp_tomato(t_tab *, char **);
char    *remp_dough(t_tab *, char **);
char    *remp_onion(t_tab *, char **);
char    *remp_pasta(t_tab *, char **);
char    *remp_olive(t_tab *, char **);
char    *remp_pepper(t_tab *, char **);
char    *remp_ham(t_tab *, char **);
char    *remp_cheese(t_tab *, char **);

#endif /* FRIDGE_H_ */
