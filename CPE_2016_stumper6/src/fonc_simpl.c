/*
** fonc_simpl.c for  in /home/amoraa/CPE_2016_stumper6/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Tue May 23 17:48:13 2017 Florian Testu
** Last update Tue May 23 20:24:27 2017 Florian Testu
*/

#include "../inc/headers.h"

int     my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0');
  return (i);
}

int     my_strcmp(char *str1, char *str2)
{
  int	i;
  int	j;

  i = j = -1;
  while (str1[++i] != '\0' && str2[++j] != '\0')
    {
      if (str1[i] != str2[j])
        return (1);
    }
  return (0);
}

int     my_getnbr(char *str)
{
  int	i;
  int	odg;
  int	nb;

  odg = 1;
  nb = 0;
  i = 0;
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
