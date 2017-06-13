/*
** my_get_next_line.c for colle in /home/Berzerk/colle/
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Tue Apr 25 17:13:27 2017 Antonin Hattabe
** Last update Tue Apr 25 18:41:27 2017 Florian Testu
*/

#include "../inc/my.h"

int	my_strlen(char *str)
{
  int	x;

  x = 0;
  if (str == NULL)
    return (0);
  while (str[x] != '\0')
    x++;
  return (x);
}

char	*my_reallocopy(char *s1, char *s2)
{
  int	x;
  int	y;
  char	*rendu;

  if ((rendu = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1))) == NULL)
      return (NULL);
  x = y = 0;
  if (s1 != NULL)
    {
      while (s1[x] != '\0')
	{
	  rendu[x] = s1[x];
	  x++;
	}
    }
  while (s2[y] != '\0')
    {
      rendu[x] = s2[y];
      x++;
      y++;
    }
    rendu[x] = '\0';
  if (rendu[x - 1] == '\n')
    rendu[x - 1] = rendu[x];
  free(s1);
  free(s2);
  return (rendu);
}

char	*my_get_next_line(int fd)
{
  char	*final;
  char	*tmp;
  ssize_t	nb_read;

  final = NULL;
  while (1)
{
      tmp = NULL;
      if ((tmp = malloc(sizeof(char) * 11)) == NULL)
	return (NULL);
      nb_read = read(fd, tmp, 10);
      if (tmp[0] == '\n')
	return (NULL);
      if (nb_read != 10)
	{
	  final = my_reallocopy(final, tmp);
	  break;
	}
      else if (tmp == NULL)
	return (NULL);
      final = my_reallocopy(final, tmp);
    }
  final[my_strlen(final)] = '\0';
  return (final);
}
