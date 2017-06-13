/*
** create_map.c for tictactoe in /home/Berzerk/CPE_2016_stumper6/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Tue May 23 17:14:09 2017 Antonin Hattabe
** Last update Tue May 23 20:53:47 2017 Florian Testu
*/

#include "../inc/headers.h"

char	*create_map_ligne(t_tab *data)
{
  char	*str;
  int	x;

  x = 1;
  if ((str = malloc(sizeof(char) * (data->size + 3))) == NULL)
    return (NULL);
  str[0] = '+';
  while (x <= data->size)
    {
      str[x] = '-';
      x++;
    }
  str[x] = '+';
  str[x + 1] = '\0';
  return (str);
}

char	**create_map(t_tab *data)
{
  char	**map;
  int	x;
  int	y;
  
  x = 1;
  y = 0;
  if ((map = malloc(sizeof(char*) * (data->size + 3))) == NULL)
    return (NULL);
  map[0] = create_map_ligne(data);
  while (x <= data->size)
    {
      if ((map[x] = malloc(sizeof(char) * (data->size + 3))) == NULL)
	return (NULL);
      map[x][0] = '|';
      while (++y <= data->size)
	map[x][y] = ' ';
      map[x][y] = '|';
      map[x][y + 1] = '\0';
      x++;
      y = 0;
    }
  map[x] = create_map_ligne(data);
  map[x + 1] = NULL;
  return (map);
}
