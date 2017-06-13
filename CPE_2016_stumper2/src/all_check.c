/*
** all_check.c for  in /home/AmOrAA/CPE_2016_stumper2/CPE_2016_stumper2/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Apr 25 18:21:07 2017 Florian Testu
** Last update Tue Apr 25 18:46:31 2017 Florian Testu
*/

#include "../inc/my.h"

char    **check_tab(char **argv, int i, int j, int size)
{
  char	**tab;
  
  if (argv[i][j] == '-' && argv[i][j + 1] == 'g')
    {
      if (size == 0)
        size = 4;
      if ((check_error(argv[i + 1])) != 0)
        return (NULL);
      tab = str_to_wtab(argv[i + 1], size);
    }
  return (tab);
}

int     check_size(char **argv, int i, int j, int size)
{
  if (argv[i][j] == '-' && argv[i][j + 1] == 's')
    {
      size = my_getnbr(argv[i + 1]);
      if (size < 0)
        return (84);
    }
  return (size);
}

char    *check_word(char **argv, int i, int j, char *word)
{
  if (argv[i][j] == '-' && argv[i][j + 1] == 'w')
    {
      if ((check_error(argv[i + 1])) != 0)
        return (NULL);
      word = argv[i + 1];
    }
  return (word);
}
int     check_h(char **argv, int i, int j)
{
  if (argv[i][j] == '-' && argv[i][j + 1] == 'h')
    {
      print_h();
      return (84);
    }
  return (0);
}
