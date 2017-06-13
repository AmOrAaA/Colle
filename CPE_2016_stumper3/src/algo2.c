/*
** algo2.c for mixword in /home/Berzerk/CPE_2016_stumper3/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Wed May  3 19:33:20 2017 Antonin Hattabe
** Last update Wed May  3 20:24:41 2017 Antonin Hattabe
*/

#include "../inc/my.h"

char	*add_rdm(char **tab, int x, int size)
{
  char	*str;
  int	y;

  y = 0;
  str = malloc(sizeof(char) * size);
  str[size + 1] = '\0';
  if (my_strlen(tab[x]) < size - 1)
    {
      while (tab[x][y] != '\0')
	{
      str[y] = tab[x][y];
      y++;
	}
      while (y < size - 1)
	{
	  str[y] = 97 + (rand() % 26);
	  y++;
	}
    }
  else
    str = tab[x];
  return (str);
}

char	**algo(t_tab *data, char **tab)
{
  char	**end;
  int	x;
  int	y;

  x = 0;
  y = 0;
  srand(time(NULL));
  end = malloc(sizeof(char *) * data->size);
  while (x < data->size)
    {
      if (my_strlen(tab[x]) <= data->size)
	{
	  data->nb_w_check++;
	  end[y] = add_rdm(tab, x, data->size);
	  y++;
	}
      x++;
    }
  end[y] = NULL;
  return (end);
}
