/*
** remp_fridg2.c for  in /home/amoraa/CPE_2016_stumper4/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 11 20:12:06 2017 Florian Testu
** Last update Thu May 11 20:23:59 2017 Florian Testu
*/

#include "../include/fridge.h"

char    *remp_pepper(t_tab *fridge, char **tab)
{
  int   i;
  int   j;
  int   k;
  char  *str;

  i = -1;
  while (tab[0][i] != '=');
  j = i;
  while (tab[0][j] != '\0');
  if ((str = malloc(sizeof(char) * j + 1)) == NULL)
    return (NULL);
  j = i;
  while (tab[0][j] != '\0')
    str[k] = tab[0][j];
  fridge->pepper = my_getnbr(str);
}

char    *remp_ham(t_tab *fridge, char **tab)
{
  int   i;
  int   j;
  int   k;
  char  *str;

  i = -1;
  while (tab[0][i] != '=');
  j = i;
  while (tab[0][j] != '\0');
  if ((str = malloc(sizeof(char) * j + 1)) == NULL)
    return (NULL);
  j = i;
  while (tab[0][j] != '\0')
    str[k] = tab[0][j];
  fridge->ham = my_getnbr(str);
}

char    *remp_cheese(t_tab *fridge, char **tab)
{
  int   i;
  int   j;
  int   k;
  char  *str;

  i = -1;
  while (tab[0][i] != '=');
  j = i;
  while (tab[0][j] != '\0');
  if ((str = malloc(sizeof(char) * j + 1)) == NULL)
    return (NULL);
  j = i;
  while (tab[0][j] != '\0')
    str[k] = tab[0][j];
  fridge->cheese = my_getnbr(str);
}
