/*
** remp_fridg.c for  in /home/amoraa/CPE_2016_stumper4/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 11 20:09:33 2017 Florian Testu
** Last update Thu May 11 20:25:59 2017 Florian Testu
*/

#include "../include/fridge.h"

char    *remp_tomato(t_tab *fridge, char **tab)
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
  fridge->tomato = my_getnbr(str);
}

char   *remp_dough(t_tab *fridge, char **tab)
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
  fridge->dough = my_getnbr(str);
}

char    *remp_onion(t_tab *fridge, char **tab)
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
  fridge->onion = my_getnbr(str);
}

char    *remp_pasta(t_tab *fridge, char **tab)
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
  fridge->pasta = my_getnbr(str);
}
char    *remp_olive(t_tab *fridge, char **tab)
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
  fridge->olive = my_getnbr(str);
}
