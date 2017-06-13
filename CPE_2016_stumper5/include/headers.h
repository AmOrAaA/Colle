/*
1;4600;0c** headers.h for  in /home/amoraa/CPE_2016_stumper5/include
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 18 19:57:42 2017 Florian Testu
** Last update Thu May 18 20:14:16 2017 Antonin Hattabe
*/

#ifndef HEADERS_H_
# define HEADERS_H_

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_tab
{
  char	**zero;
  char	**one;
  char	**two;
  char	**three;
  char	**four;
  char	**five;
  char	**six;
  char	**seven;
  char	**eight;
  char	**nine;
}		t_tab;

int	check_magic(char **, int);
int	my_strlen(char *);
int	my_strcmp(char *, char *);
int	check_argv(char **);
int	check_argv(char **);
int	check_all(char **);

t_tab	create_struct();

char	**tab_zero();
char	**tab_one();
char	**tab_two();
char	**tab_three();
char	**tab_four();
char	**tab_five();
char	**tab_six();
char	**tab_seven();
char	**tab_eight();
char	**tab_nine();

char	***custom_tab(char ***, char *, char *);
char	***final_tab(t_tab *, char *);

void	aff_nb(char ***, char *);
void	my_putstr(char *);
void	my_putchar(char);
void	aff_nb_custom(char ***, char *, char *);

#endif
