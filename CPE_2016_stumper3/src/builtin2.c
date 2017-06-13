/*
** builtin2.c for mixword in /home/Berzerk/CPE_2016_stumper3/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Wed May  3 18:33:29 2017 Antonin Hattabe
** Last update Wed May  3 19:05:54 2017 Antonin Hattabe
*/

#include "../inc/my.h"

int	my_strlen(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    x++;
  return (x);
}

int	my_getnbr(char *str)
{
  int	i;
  int	odg;
  int	nb;

  i = 0;
  odg = 1;
  nb = 0;
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
