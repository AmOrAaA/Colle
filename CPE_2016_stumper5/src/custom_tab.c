/*
** custom_tab.c for crocus in /home/Berzerk/CPE_2016_stumper5/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 18 19:05:14 2017 Antonin Hattabe
** Last update Thu May 18 20:22:16 2017 Florian Testu
*/

#include "../include/headers.h"

void	my_putstr_custom(char *str, char c)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      if (str[x] == '0')
	my_putchar(c);
      else
	my_putchar(str[x]);
      x++;
    }
}

void    aff_nb_custom(char ***tab, char *arg, char *remp)
{
  int   x;
  int   y;

  x = 0;
  y = 0;
  while (y < 5)
    {
      while (tab[x] != NULL)
	{
	  if (remp[arg[x] - 48] != '\0')
	    my_putstr_custom(tab[x][y], remp[arg[x] - 48]);
	  else
	    my_putstr(tab[x][y]);
	  if (x + 1 < my_strlen(arg))
	    my_putchar(' ');
	  x++;
	}
      my_putchar('\n');
      y++;
      x = 0;
    }
}
