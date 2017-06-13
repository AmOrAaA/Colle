/*
** parser.c for mixworld in /home/Berzerk/CPE_2016_stumper3/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Wed May  3 17:49:13 2017 Antonin Hattabe
** Last update Wed May  3 18:58:30 2017 Antonin Hattabe
*/

#include "../inc/my.h"

int	parse_argv(int ac, char **av)
{
  if (ac != 3 && ac != 5)
    return (84);
  else if (my_strcmp(av[1], "-f") != 0)
    return (84);
  else if (ac == 5)
    if (my_strcmp(av[3], "-s") != 0 || my_isnum(av[4]) != 0)
      return (84);
  return (0);
}

int	parse_file(t_tab *data, char **tab)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (tab[x] != NULL)
    {
      while (tab[y] != NULL)
	{
	  if (x != y)
	    if (my_strcmp(tab[x], tab[y]) == 0)
	      return (84);
	  y++;
	}
      x++;
      y = 0;
    }
  return (parse_size_file(data, tab));
}

int	parse_size_file(t_tab *data, char **tab)
{
  int	x;

  x = 0;
  while (tab[x] != NULL)
    {
      if (my_strlen(tab[x]) > data->size)
	return (84);
      x++;
    }
  return (0);
}

