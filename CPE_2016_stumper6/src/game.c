/*
** game.c for  in /home/amoraa/CPE_2016_stumper6/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Tue May 23 19:05:33 2017 Florian Testu
** Last update Tue May 23 20:47:36 2017 Florian Testu
*/

#include "../inc/headers.h"

int	check_vir(char *str)
{
  int	i;
  int	compt;

  i = -1;
  compt = 0;
  while (str[++i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9' || str[i] != ',')
	  return (84);
      if (str[i] == ',')
	compt++;
    }
  if (compt != 1)
    return (84);
  return (0);
}

int	take_int(char *str, int *x, int *y)
{
  int	i;
  int	j;
  char	*line;
  char	*colon;

  i = j = -1;
  while (str[++i] && str[i] != ',');
  if ((line = malloc(sizeof(char) * i + 1)) == NULL)
    return (84);
  while (str[++i] != '\0')
    j++;
  if ((colon = malloc(sizeof(char) * i + 1)) == NULL)
    return (84);
  i = j = -1;
  while (str[++i] && str[i] != ',')
    line[i] = str[i];
  line[i] = '\0';
  while (str[++i] != '\0')
    colon[++j] = str[i];
  colon[j + 1] = '\0';
  x[0] = my_getnbr(line);
  y[0] = my_getnbr(colon);
  free(line);
  free(colon);
  return (0);
}

char	**player1(t_tab data, char *str)
{
  int   x;
  int   y;

  x = 0;
  y = 0;
  my_putstr("Player 1> ");
  str = get_next_line(0);
  take_int(str, &x, &y);
  if (x < 0 || x > data.size || y < 0 || y > data.size)
    return (player1(data, str));
  if (data.map[y + 1][x + 1] == data.p_one || data.map[y + 1][x + 1] == data.p_one)
    return (player1(data, str));
  data.map[y + 1][x + 1] = data.p_one;
  print_map(data.map);
  free(str);
  return (data.map);
}

char	**player2(t_tab data, char *str)
{
  int   x;
  int   y;

  my_putstr("Player 2> ");
  str = get_next_line(0);
  take_int(str, &x, &y);
  if (x < 0 || x > data.size || y < 0 || y > data.size)
    return (player2(data, str));
  if (data.map[y + 1][x + 1] == data.p_two || data.map[y + 1][x + 1] == data.p_two)
    return (player2(data, str));
  data.map[y + 1][x + 1] = data.p_two;
  print_map(data.map);
  free(str);
  return (data.map);
}

int	game(t_tab data)
{
  char	*str;

  str = 0;
  print_map(data.map);
  while (1)
    {
      data.map = player1(data, str);
      if ((check_win(&data)) == 1)
	return (0);
      data.map = player2(data, str);
      if ((check_win(&data)) == 1)
	return (0);
    }
}
