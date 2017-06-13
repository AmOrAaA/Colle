/*
** aff.c for stumper7 in /home/Berzerk/CPE_2016_stumper7/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu Jun  1 16:19:20 2017 Antonin Hattabe
** Last update Thu Jun  1 19:50:12 2017 Antonin Hattabe
*/

#include "../inc/my.h"

void	aff_result(char **tab, int *nb)
{
  int	x;

  x = -1;
  while (tab[++x] != NULL)
    {
      if (double_write(tab, x, tab[x][0]) == 0)
	{
	  my_putchar(tab[x][0]);
	  my_putchar(':');
	  my_putnbr(nb[x]);
	  my_putchar('\n');
	}
    }
}

void	aff_result2(char **tab, int *nb)
{
  int   x;

  x = -1;
  while (tab[++x] != NULL)
    {
      if (nb[x] > 0 && double_write(tab, x, tab[x][0]) == 0)
	{
	  my_putchar(tab[x][0]);
	  my_putchar(':');
	  my_putnbr(nb[x]);
	  my_putchar('\n');
	}
    }
}

void	aff_result_group(char **tab, int *nb)
{
  int	x;

  x = -1;
  while (tab[++x] != NULL)
    {
      if (nb[x] > 0 && double_write(tab, x, tab[x][0]) == 0)
	{
	  my_putchar(tab[x][0]);
	  if (tab[x + 1] != NULL && nb[x] == nb[x + 1])
	    my_putchar(',');
	  else
	    {
	      my_putchar(':');
	      my_putnbr(nb[x]);
	      my_putchar('\n');
	    }
	}
    }
}

int	double_write(char **tab, int nb, char c)
{
  int	x;

  x = -1;
  while (tab[++x] != NULL && x < nb)
    {
      if (tab[x][0] == c)
	return (1);
    }
  return (0);
}
