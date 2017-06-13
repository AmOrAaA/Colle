/*
** aff.c for mixword in /home/Berzerk/CPE_2016_stumper3/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Wed May  3 18:00:13 2017 Antonin Hattabe
** Last update Wed May  3 20:23:54 2017 Antonin Hattabe
*/

#include "../inc/my.h"

void	aff_ligne_grid(t_tab *data)
{
  int	x;

  x = 0;
  my_putchar('+');
  while (x + 1<= data->size)
    {
      my_putchar('-');
      x++;
    }
  my_putchar('+');
  my_putchar('\n');
}

void	aff_grid(t_tab *data, char **tab)
{
  int	x;

  x = 0;
  aff_ligne_grid(data);
  while (tab[x] != '\0')
    {
      my_putchar('|');
      my_putstr(tab[x]);
      my_putchar('|');
      my_putchar('\n');
      x++;
    }
  aff_ligne_grid(data);
}

void	aff_string_nb(t_tab *data)
{
  my_putnbr(data->nb_w_check);
  my_putchar('/');
  my_putnbr(data->nb_w);
  my_putstr(" words inserted in the grid.\n");
}


  
