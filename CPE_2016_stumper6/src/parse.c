/*
** parse.c for tictactoe in /home/Berzerk/CPE_2016_stumper6/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Tue May 23 18:26:47 2017 Antonin Hattabe
** Last update Tue May 23 18:32:17 2017 Antonin Hattabe
*/

#include "../inc/headers.h"

int	get_nb(char *str, int nb)
{
  int	tmp;
  char	*str;
  
  if (nb == 1)
    {
      str = get_ligne(
    }
}


int	parse(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
    x++;
  if (str[x] != ',')
    return (84);
  while (str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
    x++;
  if (str[x] != '\0')
    return (84);
  return (0);
}

int	prompt(t_tab *data)
{
  int	x;
  int	y;

  if (parse(str) == 84)
    return (84);
  x = get_nb(str, 1);
  y = get_nb(str, 2);
}
