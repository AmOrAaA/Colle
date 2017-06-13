/*
** fonc.c for  in /home/AmOrAA/CPE_2016_stumper1/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Apr 18 15:35:08 2017 Florian Testu
** Last update Tue Apr 18 18:26:20 2017 Florian Testu
*/

#include "../inc/my.h"

void	my_putchar(char z)
{
  write(1, &z, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0');
  return (i);
}

void	my_putstr(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    my_putchar(str[i]);
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
  while (nb / div < 9)
    div = div * 10;
  while (div != 0)
    {
      my_putchar((nb / div) + 48);
      nb = nb % div;
      div = div / 10;
    }
}

int	my_getnbr(char *str)
{
  int	i;
  int	odg;
  int	nb;

  i = 0;
  nb = 0;
  odg = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	odg = odg * -1;
      i++;
    }
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10 + str[i] - 48;
      i++;
    }
  nb = nb * odg;
  return (nb);
}
