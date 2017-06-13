/*
** step_one.c for stumper in /home/Berzerk/CPE_2016_stumper7/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu Jun  1 16:13:38 2017 Antonin Hattabe
** Last update Thu Jun  1 17:45:39 2017 Antonin Hattabe
*/

#include "../inc/my.h"

int	count_char(char c, char *str)
{
  int	x;
  int	nb;

  nb = 0;
  x = -1;
  while (str[++x] != '\0')
    {
      if (c == str[x]) 
	nb++;
    }
  return (nb);
}

int	my_str_tab(char **tab)
{
  int	x;

  x = -1;
  while (tab[++x] != NULL);
  return (x);
}

int	*create_tab_int(char **tab, char *str)
{
  int	*nb;
  int	x;
  
  x = -1;
  if ((nb = malloc(sizeof(int) * my_str_tab(tab))) == NULL)
    return (NULL);
  while (tab[++x] != NULL)
    nb[x] = count_char(tab[x][0], str);
  return (nb);
}
