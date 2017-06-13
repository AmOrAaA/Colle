/*
** base_fonc.c for  in /home/amoraa/CPE_2016_stumper4/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 11 17:39:48 2017 Florian Testu
** Last update Thu May 11 20:37:10 2017 Florian Testu
*/

#include "../include/fridge.h"

void	my_putchar(char z)
{
  write(1, &z, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] == '\n');
      else
	my_putchar(str[i]);
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0');
  return (i);
}

int	my_getnbr(char *str)
{
  int	i;
  int	odg;
  int	nb;

  odg = 1;
  nb = 0;
  i = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if(str[i] == '-')
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

int	my_strcmp(char *str1, char *str2)
{
  int	i;
  int	j;

  i = -1;
  j = -1;
  while (str1[++i] != '\0' && str2[++j] != '\0')
    {
      if (i >= 4 && str1[i] != str2[j])
	return (2);
      if (str1[i] != str2[j])
	return (1);
    }
  return (0);
}
