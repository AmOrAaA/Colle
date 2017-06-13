/*
** str_to_wtab.c for colle in /home/Berzerk/colle/
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Tue Apr 25 18:59:45 2017 Antonin Hattabe
** Last update Tue Apr 25 17:56:31 2017 Florian Testu
*/

#include "../inc/my.h"

char	**str_to_wtab(char *str, int size)
{
  char	**tab;
  int	x;
  int	y;
  int	g;

  x = y = g = 0;
  if ((tab = malloc(sizeof(char*) * size)) == NULL)
    return (NULL);
  if ((tab[0] = malloc(sizeof(char) * size)) == NULL)
    return (NULL);
  while (str[g] != '\0')
    {
      tab[x][y] = str[g];
      y++;
      g++;
      if (g % size == 0)
	{
	  tab[x][y] = '\0';
	  y = 0;
	  x++;
	  if ((tab[x] = malloc(sizeof(char) * size)) == NULL)
	    return (NULL);
	}
    }
  return (tab);
}
