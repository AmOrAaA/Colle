/*
** aff.c for tictactoe in /home/Berzerk/CPE_2016_stumper6/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Tue May 23 18:10:50 2017 Antonin Hattabe
** Last update Tue May 23 18:17:38 2017 Antonin Hattabe
*/

#include "../inc/headers.h"

void	aff_map(t_tab *data)
{
  int	x;

  x = -1;
  while (data->map[++x] != NULL)
    {
      my_putstr(data->map[x]);
      my_putchar('\n');
    }
}
