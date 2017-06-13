/*
** my_str_to_wordtab.c for  in /home/amoraa/CPE_2016_stumper4/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 11 18:21:36 2017 Florian Testu
** Last update Thu May 11 19:50:51 2017 Florian Testu
*/

#include "../include/fridge.h"

int	check_line(char *str)
{
  int	i;
  int	j;
  
  i = -1;
  j = 0;
  while (str[++i] != '\0')
    {
      if (str[i] == '\n')
	j++;
    }
  return (j);
}

int	my_str_to_tab(char *str, int i)
{
  int	j;

  j = i;
  while (str[j] != '\n')
    j++;
  return (j);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	k;
  char	**tab;

  j = check_line(str);
  if ((tab = malloc(sizeof(char *) * (j + 1))) == NULL)
    return (NULL);
  j = k = i = 0;
  if ((tab[j] = malloc(sizeof(char) * my_str_to_tab(str, i) + 1)) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	{
	  tab[j][k] = '\0';
	  k = 0;	  
	  if ((tab[++j] = malloc(sizeof(char) * my_str_to_tab(str, ++i) + 1)) == NULL)
	    return (NULL);
	}
      else
	tab[j][k++] = str[i++];
    }
  tab[j] = NULL;
  return (tab);
}
