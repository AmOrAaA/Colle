/*
** check_file.c for  in /home/amoraa/Delivery/rush/CPE_2016_stumper3/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Wed May  3 19:37:47 2017 Florian Testu
** Last update Wed May  3 19:55:51 2017 Florian Testu
*/

#include "../inc/my.h"

int	check_file(t_tab *data)
{
  int	i;
  int	j;

  i = -1;
  while (data->tab[++i] != NULL)
    {
      j = -1;
      while (data->tab[i][++j] != '\0')
	{
	  if (data->tab[i][j] < 'a' || data->tab[i][j] > 'z')
	    return (84);
	}
    }
  return (0);
}
