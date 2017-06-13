/*
** create_pattern.c for stumper1 in /home/Berzerk/tmp
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Tue Apr 18 18:40:45 2017 Antonin Hattabe
** Last update Tue Apr 18 19:01:21 2017 Florian Testu
*/

#include "../inc/my.h"

char	*motif2()
{
  char	*str;

  if ((str = malloc(sizeof(char) * 6)) == NULL)
    return (NULL);
  str = "AACABC";
  return (str);
}

char	*my_strcat(char *str1, char *str2)
{
  int	x;
  int	y;
  char	*str;

  if ((str = malloc(sizeof(char) *
		    (my_strlen(str1) + my_strlen(str2)))) == NULL)
    return (NULL);
  x = y = 0;
  while (str1[x] != '\0')
    {
      str[x] = str1[x];
      x++;
    }
  while (str2[y] != '\0')
    {
      str[x] = str2[y];
      x++;
      y++;
    }
  return (str);
}

char	*motif3()
{
  char	*str;
  char	*str2;
  char	*finally;

  if ((str = malloc(sizeof(char) * 50)) == NULL)
    return (NULL);
  if  ((str2 = malloc(sizeof(char) * 40)) == NULL)
    return (NULL);
  str = "AAAAAAAAACABAABAABACAAAAAAAAACAAABBBAAACABABBBABAC";
  str2 = "AAABBBAAACAAAAAAAAACABAABAABACAAAAAAAAAC";
  finally = my_strcat(str, str2);
  return (finally);
}

char	**create_motif(int option)
{
  char	**tab_motif;
  char	*motif;

  if (option == 2)
    motif = motif2();
  else if (option == 3)
    motif = motif3();
  tab_motif = str_to_wtab(motif);
  return (tab_motif);
}
