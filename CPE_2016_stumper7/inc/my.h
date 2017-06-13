/*
** my.h for  in /home/amoraa/CPE_2016_stumper7/inc
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu Jun  1 16:05:35 2017 Florian Testu
** Last update Thu Jun  1 19:48:00 2017 Antonin Hattabe
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_compt
{
  int		i;
  int		k;
  int		j;
}		t_compt;

void	my_putstr(char *);
void	my_putchar(char);
void	my_putnbr(int);
void	aff_result(char **, int *);
void	my_free_tab(char **);
void	aff_result(char **, int *);
void	aff_result_group(char **, int *);
void	param(int, char **);
void	step_one(char **);
int	step_two(char **);
void	step_three(int, char **, int);
void	sort_nb_tab(char **, int *, int);
void	aff_result2(char **tab, int *nb);

int	size_number(int);
int	my_strlen(char *);
int	my_strcmp(char *, char *);
int	double_write(char **, int, char);

int	*create_tab_int(char **, char *);

char	**sort_tab(char **, char **);
char	**create_tab_char(char *);

#endif /* MY_H_ */
