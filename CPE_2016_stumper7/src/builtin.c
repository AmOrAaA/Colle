/*
** builtin.c for stumper in /home/Berzerk/CPE_2016_stumper7/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu Jun  1 16:20:38 2017 Antonin Hattabe
** Last update Thu Jun  1 16:27:53 2017 Antonin Hattabe
*/

#include "../inc/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	x;

  x = -1;
  while (str[++x] != '\0')
    my_putchar(str[x]);
}

int	my_strcmp(char *s1, char *s2)
{
  int	x;

  x = -1;
  while (s1[++x] != '\0' && s2[x] != '\0')
    {
      if (s1[x] != s2[x])
	return (1);
    }
  if (s1[x] != '\0' || s2[x] != '\0')
    return (1);
  return (0);
}

int	my_strlen(char *str)
{
  int	x;

  x = -1;
  while (str[++x] != '\0');
  return (x);
}

void	my_free_tab(char **tab)
{
  int	x;

  x = -1;
  while (tab[++x] != NULL)
    free(tab[x]);
  free(tab);
}
