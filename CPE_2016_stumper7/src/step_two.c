/*
** step_two.c for stumper in /home/Berzerk/CPE_2016_stumper7/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu Jun  1 16:23:27 2017 Antonin Hattabe
** Last update Thu Jun  1 19:26:42 2017 Antonin Hattabe
*/

#include "../inc/my.h"

char	**sort_tab(char **tab, char **tab2)
{
  int	x;
  int	y;
  char	tmp;
  int	c;
  
  x = -1;
  c = 0;
  while (tab2[++x] != NULL)
    {
      y = -1;
      while (tab[++y] != NULL)
	{
	  if (tab[y][0] == tab2[x][0])
 	    {
	      tmp = tab[c][0];
	      tab[c][0] = tab[y][0];
	      tab[y][0] = tmp;
	      c++;
	      break;
	    }
	}
    }
    my_free_tab(tab2);
  return (tab);
}
