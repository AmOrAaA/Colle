/*
** begin_default.c for  in /home/amoraa/CPE_2016_stumper6/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Tue May 23 18:02:58 2017 Florian Testu
** Last update Tue May 23 20:51:10 2017 Florian Testu
*/

#include "../inc/headers.h"

void	print_map(char **map)
{
  int	i;

  i = -1;
  while (map[++i] != NULL)
    {
    my_putstr(map[i]);
    my_putchar('\n');
    }
}

char	**player_one(char **map, char *str)
{
  int	x;
  int	y;

  my_putstr("Player 1> ");
  str = get_next_line(0);
  if (str[1] != ',')
    return (player_one(map, str));
  x = str[0] - 47;
  y = str[2] - 47;
  if (x < 0 || x > 3 || y < 0 || y > 3)
    return (player_one(map, str));
  if (map[y][x] == 'X' || map[y][x] == 'O')
    return (player_one(map, str));
  map[y][x] = 'X';
  print_map(map);
  free(str);
  return (map);
}

char	**player_two(char **map, char *str)
{
  int	x;
  int	y;
  
  my_putstr("Player 2> ");
  str = get_next_line(0);
  if (str[1] != ',')
    return (player_two(map, str));
  x = str[0] - 47;
  y = str[2] - 47;
  if (x < 0 || x > 3 || y < 0 || y > 3)
    return (player_two(map, str));
  if (map[y][x] == 'X' || map[y][x] == 'O')
    return (player_two(map, str));
  map[y][x] = 'O';
  print_map(map);
  free(str);
  return (map);
}

int	begin_default(t_tab data)
{
  char	*str;

  str = 0;
  print_map(data.map);
  while (1)
    {
      data.map = player_one(data.map, str);
      if ((check_win(&data)) == 1)
      	  return (0);
      data.map = player_two(data.map, str);
      if ((check_win(&data)) == 1)
	return (0);
    }
  return (0);
}
