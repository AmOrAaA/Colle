/*
** check_all.c for  in /home/AmOrAA/CPE_2016_stumper1/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Apr 18 17:29:45 2017 Florian Testu
** Last update Tue Apr 18 18:25:46 2017 Florian Testu
*/

#include "../inc/my.h"

int	check_argv(char **argv)
{
  int	i;
  int	j;
  int	x;
  int	y;

  i = -1;
  x = 0;
  y = 0;
  while (argv[++i] != NULL)
    {
      j = -1;
      while (argv[i][++j] != '\0')
        {
          if (i > 1 && argv[i][j] != '#' && argv[i][j] != '@'
	      && argv[i][j] != ' ')
            return (84);
          if (i == 2 && argv[i][j] == '@')
            x++;
          if (i == 3 && argv[i][j] == '@')
            y++;
        }
    }
  if (x != y)
    return (84);
  return (x);
}

int	check_argv1(char **argv)
{
  int	i;
  int	x;
  int	y;

  i = 0;
  while (argv[1][i] != '\0')
    {
      if (argv[1][i] < '0' || argv[1][i] > '9')
        return (84);
      i++;
    }
  x = my_strlen(argv[2]);
  y = my_strlen(argv[3]);
  if (x != y)
    return (84);
  return (0);
}

int	all_check(int argc, char **argv)
{
  int	nb;

  if (argc != 4)
    {
      write(2, "Error: Invalid number argument", 30);
      my_putchar('\n');
      return (84);
    }
  if ((nb = check_argv(argv)) == 84)
    {
      write(2, "Error: invalid syntax.", 21);
      my_putchar('\n');
      return (84);
    }
  if ((check_argv1(argv)) == 84)
    {
      write(2, "Error: first argument is not a number.", 38);
      my_putchar('\n');
      return (84);
    }
  return (0);
}
