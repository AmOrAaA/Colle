/*
** algo.c for colle in /home/Berzerk/colle/CPE_2016_stumper2/
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Tue Apr 25 19:32:30 2017 Antonin Hattabe
** Last update Tue Apr 25 20:26:42 2017 Antonin Hattabe
*/

#include "../inc/my.h"

int	search_word2(char **tab, char *str, int x, int y)
{
  static int g;

  g++;
  while (str[g] != '\0')
    {
      if (x != 0 && tab[x - 1][y] == str[g])
	  search_word2(tab, str, x - 1, y);
      else if (tab[x + 1] != NULL && tab[x + 1][y] == str[g])
	  search_word2(tab, str, x + 1, y);
      else if (tab[x][y + 1] == str[g])
	  search_word2(tab, str, x, y + 1);
      else if (tab[x][y - 1] == str[g])
	search_word2(tab, str, x, y - 1);
      if (str[g] == '\0')
	  break;
	  return (1);
    }
    tab[x][y] -= 32;
  return (0);
}

void	restat_tab(char **tab, int size)
{
  int	x;
  int	y;

  y = x = 0;
  while (tab[x] != NULL)
    {
      while (y < size)
	{
	  if (tab[x][y] != '\0' && tab[x][y] >= 'A' && tab[x][y] <= 'Z')
	    tab[x][y] += 32;
	  y++;
	}
      x++;
      y = 0;
    }
}

int	 search_word(char **tab, char *str, int size)
{
  int	x;
  int	y;

  x = y = 0;
  while (tab[x] != NULL)
    {
      while (tab[x][y] != '\0')
	{
	  if (tab[x][y] == str[0])
	    {
	      if (search_word2(tab, str, x, y) == 0)
		return (0);
	    }
	  y++;
	}
      x++;
      y = 0;
    }
  return (1);
}
