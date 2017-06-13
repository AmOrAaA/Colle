/*
** step_three.c for stumper in /home/Berzerk/CPE_2016_stumper7/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu Jun  1 16:31:44 2017 Antonin Hattabe
** Last update Thu Jun  1 19:41:08 2017 Antonin Hattabe
*/

#include "../inc/my.h"

void	sort_nb_tab(char **tab, int *nb, int option)
{
  int	x;
  char	*tmp;
  int	nb_tmp;
  
  x = -1;
  while (tab[++x] != NULL)
    {
      if (tab[x + 1] != NULL && nb[x] < nb[x + 1])
	{
	  nb_tmp = nb[x];
	  nb[x] = nb[x + 1];
	  nb[x + 1] = nb_tmp;
	  tmp = tab[x];
	  tab[x] = tab[x + 1];
	  tab[x + 1] = tmp;
	  x = -1;
	}
    }
  if (option == 3)
    aff_result2(tab, nb);
  else if (option == 4)
    aff_result_group(tab, nb);
}
