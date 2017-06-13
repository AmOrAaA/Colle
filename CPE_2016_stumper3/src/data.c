/*
** data.c for mixword in /home/Berzerk/CPE_2016_stumper3/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Wed May  3 18:58:49 2017 Antonin Hattabe
** Last update Wed May  3 19:22:12 2017 Antonin Hattabe
*/

#include "../inc/my.h"

int	count_ligne(char **tab)
{
  int	x;

  x = 0;
  while (tab[x] != NULL)
    x++;
  return (x);
}

void	remp_data(t_tab *data, char **tab, int ac, char **av)
{
  data->nb_w = count_ligne(tab);
  data->nb_w_check = 0;
  data->size = 8;
  if (ac == 5)
    data->size = my_getnbr(av[4]);
}
