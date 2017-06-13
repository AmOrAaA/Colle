/*
** main.c for tictactoe in /home/Berzerk/CPE_2016_stumper6/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Tue May 23 17:10:49 2017 Antonin Hattabe
** Last update Tue May 23 20:49:24 2017 Florian Testu
*/

#include "../inc/headers.h"

int	check_size(char **argv, int i)
{
  int	j;

  j = -1;
  i++;
  while (argv[i][++j] != '\0')
    {
      if (argv[i][j] < '0' || argv[i][j] > '9')
	return (84);
    }
  return (0);
}

int	check_argv(t_tab *data, char **argv)
{
  int	i;
  
  i = -1;
  while (argv[++i] != NULL)
    {
      if (check_argv2(data, argv, i) == 84)
	return (84);
    }
  return (0);
}

int	check_argv2(t_tab *data, char **argv, int i)
{
  if ((my_strcmp(argv[i], "-p1")) == 0)
    {
      if (argv[i + 1] == NULL)
	return (84);
      if (my_strlen(argv[i + 1]) == 1)
	data->p_one = argv[i + 1][0];
      else
	return (84);
    }
  else if ((my_strcmp(argv[i], "-p2")) == 0)
    {
      if (argv[i + 1] == NULL)
	return (84);
      if (my_strlen(argv[i + 1]) == 1)
	data->p_two = argv[i + 1][0];
      else
	return (84);
    }
  else if ((my_strcmp(argv[i], "-s")) == 0)
    {
      if (check_size(argv, i) != 0)
	return (84);
      data->size = my_getnbr(argv[i + 1]);     
    }
  return (0);
}

void	free_tab(char **map)
{
  int	i;

  i = -1;
  while (map[++i] != NULL)
    free(map[i]);
}

int		main(int argc, char **argv)
{
  t_tab		data;
    
  if (argc > 7)
    return (84);
  if (argc == 1)
    {
    data.size = 3;
    data.map = create_map(&data);
    begin_default(data);
    }
  else
    {
      if ((check_argv(&data, argv)) == 84)
	return (84);
      if (data.p_one == data.p_two)
	  return (84);
      data.map = create_map(&data);      
      game(data);
    }
  free_tab(data.map);
  return (0);
}
