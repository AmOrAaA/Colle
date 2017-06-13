/*
** builtin.c for crocus in /home/Berzerk/CPE_2016_stumper5/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 18 17:42:28 2017 Antonin Hattabe
** Last update Thu May 18 19:57:48 2017 Antonin Hattabe
*/

#include "../include/headers.h" 

int	my_strcmp(char *s1, char *s2)
{
  int	x;
  
  x = 0;
  while (s1[x] != '\0' && s2[x] != '\0')
    {
      if (s1[x] != s2[x])
	return (1);
      x++;
    }
  if (s1[x] != '\0' || s2[x] != '\0')
    return (1);
  return (0);
}

int	my_strlen(char *str)
{
  int	x;
  
  x = 0;
  while (str[x] != '\0')
    x++;
  return (x);
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

int     my_getnbr(char *str)
{
  int   i;
  int   nb;
  int   odg;

  odg = 1;
  i = 0;
  nb = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (odg == '-')
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
