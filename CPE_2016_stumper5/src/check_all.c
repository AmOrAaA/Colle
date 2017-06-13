/*
** check_all.c for  in /home/amoraa/CPE_2016_stumper5/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 18 19:36:58 2017 Florian Testu
** Last update Thu May 18 20:22:33 2017 Florian Testu
*/

#include "../include/headers.h" 

int     check_argv(char **argv)
{
  int   i;
  int   x;
  int   y;

  i = -1;
  x = 0;
  y = 0;
  while (argv[++i] != '\0')
    {
      if ((my_strcmp("-n", argv[i])) == 0)
        x++;
      if ((my_strcmp("-s", argv[i])) == 0)
        y++;
    }
  if (x != 1 || y > 1)
    return (84);
  return (0);
}

int     check_magic(char **argv, int i)
{
  int   j;

  j = -1;
  while (argv[i][++j] != '\0')
    {
      if (argv[i][j] < '0' && argv[i][j] > '9')
        return (84);
    }
  return (0);
}

int     check_all(char **argv)
{
  int   i;
  int   x;

  i = -1;
  x = 0;
  while (argv[++i] != '\0')
    {
      if ((my_strcmp("-n", argv[i])) == 0)
	{
          if ((check_magic(argv, i)) == 84)
            return (84);
          x++;
        }
      if ((my_strcmp("-s", argv[i])) == 0)
        x++;
    }
  return (0);
}
