/*
** affichage.c for colle in /home/Berzerk/colle/
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Tue Apr 25 19:09:25 2017 Antonin Hattabe
** Last update Tue Apr 25 19:24:37 2017 Antonin Hattabe
*/

#include "../inc/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	aff_extre_map(int size)
{
  int	tiret;
  int	x;

  x = 0;
  tiret = 3 + (2 * (size - 1));
  my_putchar('+');
  while (x < tiret)
    {
      my_putchar('-');
      x++;
    }
  my_putchar('+');
  my_putchar('\n');
}

void	aff_map(char **tab, int size)
{
  int	x;
  int	y;

  x = y = 0;
  aff_extre_map(size);
  while (x < size)
    {
      my_putchar('|');
      while (tab[x][y] != '\0')
	{
	  my_putchar(' ');
	  my_putchar(tab[x][y]);
	  y++;
	}
      my_putchar(' ');
      my_putchar('|');
      my_putchar('\n');
      x++;
      y = 0;
    }
  aff_extre_map(size);
}
