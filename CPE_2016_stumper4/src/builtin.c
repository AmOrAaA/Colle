/*
** builtin.c for fridge in /home/Berzerk/CPE_2016_stumper4/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 11 17:33:13 2017 Antonin Hattabe
** Last update Thu May 11 20:26:44 2017 Antonin Hattabe
*/

#include "../include/fridge.h"

void	my_putnbrfd(int fd, int nb)
{
  int	div;
  char	nbr;

  if (nb < 0)
    {
      write(fd, "-", 1);
      nb = nb * -1;
    }
  div = 1;
  while (nb / div > 9)
    div = div * 10;
  while (div != 0)
    {
      nbr = nb / div + 48;
      write(fd, &nbr, 1);
      nb = nb % div;
      div = div / 10;
    }
  write(fd, "\n", 1);
}

void	my_putnbr(int nb)
{
  int	div;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  div = 1;
  while (nb / div > 9)
    div = div * 10;
  while (div != 0)
    {
      my_putchar((nb / div) + 48);
      nb = nb % div;
      div = div / 10;
    }
}

int	my_isnum(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      if (str[x] < '0' | str[x] > '9')
	return (1);
      x++;
    }
  return (0);
}
