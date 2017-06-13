/*
** get_next_line.c for tictactoe in /home/Berzerk/CPE_2016_stumper6/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Tue May 23 17:25:24 2017 Antonin Hattabe
** Last update Tue May 23 20:47:14 2017 Florian Testu
*/

#include "../inc/headers.h"

char		*get_next_line(int fd)
{
  static char		str[4096];
  char		*final;
  static int	x = 0;
  int		tmp;
  int		fin;
  int		y;
  
  y = -1;
  if (str == NULL || str[x] == '\0')
    {
      read(fd, str, 4096);
      x = 0;
    }
  tmp = x - 1;
  fin = tmp;
  while (str[++tmp] != '\0' && str[tmp] != '\n');
  if ((final = malloc(sizeof(char) * (tmp - fin + 1))) == NULL)
    return (NULL);
  while (str[++fin] != '\0' && str[fin] != '\n')
    final[++y] = str[fin];
  x = tmp + 1;
  final[++y] = '\0';
  return (final);
}
