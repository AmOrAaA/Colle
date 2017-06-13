/*
** my_str_to_wordtab.c for  in /home/AmOrAA/CPE_2016_stumper1/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Apr 18 18:58:31 2017 Florian Testu
** Last update Tue Apr 18 18:59:47 2017 Florian Testu
*/

#include "../inc/my.h"

int     nb_c(char *str)
{
  int   x;
  int   nb_c;

  x = nb_c = 0;
  while (str[x] != '\0')
    {
      if (str[x] == 'C')
        nb_c++;
      x++;
    }
  return (nb_c);
}

int     nb_car_per_ligne(char *str)
{
  int   x;

  x = 0;
  while (str[x] != '\0' && str[x] != 'C')
    x++;
  return (x);
}

char    **str_to_wtab(char *str)
{
  int   x;
  int   y;
  char  **tab;
  int   count_str;

  x = y = count_str = 0;
  if ((tab = malloc(sizeof(char*) * nb_c(str))) == NULL
      || (tab[x] = malloc(sizeof(char) * nb_car_per_ligne(str))) == NULL)
    return (NULL);
  while (str[count_str] != '\0')
    {
      if (str[count_str] == 'C')
        {
          x++;
          y = 0;
          count_str++;
          tab[x] = malloc(sizeof(char) * nb_car_per_ligne(str));
        }
      tab[x][y] = str[count_str];
      count_str++;
      y++;
    }
  tab[x] = NULL;
  return (tab);
}
