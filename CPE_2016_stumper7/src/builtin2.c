/*
** builtin2.c for stumper in /home/Berzerk/CPE_2016_stumper7/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu Jun  1 17:00:40 2017 Antonin Hattabe
** Last update Thu Jun  1 19:50:55 2017 Antonin Hattabe
*/

#include "../inc/my.h"

int	size_number(int nb)
{
  int	tmp;

  tmp = 1;
  while (nb / 10 >= 1)
    {
      nb /= 10;
      tmp++;
    }
  return (tmp);
}

void	my_putnbr(int nb)
{
  int	div;

  div = 1;
  if (nb < 0)
    {
      my_putchar('-');
      div = div * -1;
    }
  while ((nb /div) > 9)
    div = div * 10;
  while (div != 0)
    {
      my_putchar((nb / div) + 48);
      nb = nb % div;
      div = div / 10;
    }
}

char	*my_strcat(char *s1, char *s2)
{
  int	x;
  int	y;
  char	*tmp;
  
  x = -1;
  y = -1;
  if ((tmp = malloc(sizeof(char) *
		    (my_strlen(s1) + my_strlen(s2) + 1))) == NULL)
    return (NULL);
  while (s1[++x] != '\0')
    tmp[x] = s1[x];
  while (s2[++y] != '\0')
    {
      tmp[x] = s2[y];
      x++;
    }
  tmp[x] = '\0';
  return (tmp);
}
