/*
** create_tab_nb.c for crocus in /home/Berzerk/CPE_2016_stumper5/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 18 17:10:52 2017 Antonin Hattabe
** Last update Thu May 18 19:58:27 2017 Antonin Hattabe
*/

#include "../include/headers.h"

char	**tab_zero()
{
  char	**tab;
  int	x;
  
  x = 0;
  if ((tab = malloc(sizeof(char*) * 6)) == NULL)
    return (NULL);
  while (x < 5)
    {
      if ((tab[x] = malloc(sizeof(char) * 5)) == NULL)
	return (NULL);
      if (x == 0)
	tab[x] = " 000 \0";
      else if (x == 1)
	tab[x] = "0   0\0";
      else if (x == 2)
	tab[x] = "0   0\0";
      else if (x == 3)
	tab[x] = "0   0\0";
      else if (x == 4)
	tab[x] = " 000 \0";
      x++;
    }
  tab[x] = NULL;
  return (tab);
}

char    **tab_one()
{
  char  **tab;
  int   x;

  x = 0;
  if ((tab = malloc(sizeof(char*) * 6)) == NULL)
    return (NULL);
  while (x < 5)
    {
      if ((tab[x] = malloc(sizeof(char) * 5)) == NULL)
	return (NULL);
      if (x == 0)
	tab[x] = " 000 \0";
      else if (x == 1)
	tab[x] = "0 00 \0";
      else if (x == 2)
	tab[x] = "  00 \0";
      else if (x == 3)
	tab[x] = "  00 \0";
      else if (x == 4)
	tab[x] = " 0000\0";
      x++;
    }
  tab[x] = NULL;
  return (tab);
}

char    **tab_two()
{
  char  **tab;
  int   x;

  x = 0;
  if ((tab = malloc(sizeof(char*) * 6)) == NULL)
    return (NULL);
  while (x < 5)
    {
      if ((tab[x] = malloc(sizeof(char) * 5)) == NULL)
	return (NULL);
      if (x == 0)
	tab[x] = " 000 \0";
      else if (x == 1)
	tab[x] = "0   0\0";
      else if (x == 2)
	tab[x] = "   0 \0";
      else if (x == 3)
	tab[x] = " 0   \0";
      else if (x == 4)
	tab[x] = "00000\0";
      x++;
    }
  tab[x] = NULL;
  return (tab);
}

char    **tab_three()
{
  char  **tab;
  int   x;

  x = 0;
  if ((tab = malloc(sizeof(char*) * 6)) == NULL)
    return (NULL);
  while (x < 5)
    {
      if ((tab[x] = malloc(sizeof(char) * 5)) == NULL)
	return (NULL);
      if (x == 0)
	tab[x] = "0000 \0";
      else if (x == 1)
	tab[x] = "    0\0";
      else if (x == 2)
	tab[x] = " 000 \0";
      else if (x == 3)
	tab[x] = "    0\0";
      else if (x == 4)
	tab[x] = "0000 \0";
      x++;
    }
  tab[x] = NULL;
  return (tab);
}

char    **tab_four()
{
  char  **tab;
  int   x;

  x = 0;
  if ((tab = malloc(sizeof(char*) * 6)) == NULL)
    return (NULL);
  while (x < 5)
    {
      if ((tab[x] = malloc(sizeof(char) * 5)) == NULL)
	return (NULL);
      if (x == 0)
	tab[x] = "  00 \0";
      else if (x == 1)
	tab[x] = " 0 0 \0";
      else if (x == 2)
	tab[x] = "0  0 \0";
      else if (x == 3)
	tab[x] = "00000\0";
      else if (x == 4)
	tab[x] = "   0 \0";
      x++;
    }
  tab[x] = NULL;
  return (tab);
}
