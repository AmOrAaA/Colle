/*
** builtin.c for mixworld in /home/Berzerk/CPE_2016_stumper3/src/
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Wed May  3 17:43:07 2017 Antonin Hattabe
** Last update Wed May  3 18:39:40 2017 Antonin Hattabe
*/

#include "../inc/my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	x;

  x = 0;
  while (s1[x] != '\0' && s2[x] != '\0')
    {
      if (s1[x] != s2[x])
	return (-1);
      x++;
    }
  if (s1[x] != '\0' || s2[x] != '\0')
    return (-1);
  return (0);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      my_putchar(str[x]);
      x++;
    }
}

int	my_isnum(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      if (str[x] < '0' || str[x] > '9')
	return (-1);
      x++;
    }
  return (0);
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
  while (nb /div > 9)
    div = div * 10;
  while (div != 0)
    {
      my_putchar((nb /div) + 48);
      nb = nb % div;
      div = div / 10;
    }
}
