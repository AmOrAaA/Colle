/*
** main.c for  in /home/amoraa/CPE_2016_stumper7/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu Jun  1 16:05:47 2017 Florian Testu
** Last update Thu Jun  1 19:51:49 2017 Antonin Hattabe
*/

#include "../inc/my.h"

char	*my_strcpy(char *src)
{
  char	*copy;
  int	i;
  int	j;

  if ((copy = malloc(sizeof(char) * (my_strlen(src) + 1))) == NULL)
    return (NULL);
  i = j = -1;
  while (src[++i] != '\0')
    copy[++j] = src[i];
  copy[j] = '\0';
  return (copy);
}

char	**take_tab(char *copy, char *str, char **tab, t_compt *val)
{  
  while (str[++val->i] != '\0')
    {
      if (val->i == 0)
      {
	tab[val->k][0] = str[val->i];
	tab[val->k][1] = '\0';
      }
      else
	{
	  val->j = -1;
	  while (++val->j != val->i)
	    {
	      if (copy[val->j] == str[val->i] && str[val->i] != '\0')
		val->i++;
	    }
	  if (str[val->i] == '\0')
	    break;
	  if ((tab[++val->k] = malloc(sizeof(char ) * 2)) == NULL)
	    return (NULL);
	  tab[val->k][0] = str[val->i];
	  tab[val->k][1] = '\0';
	}
    }
  return (tab);
}

char	**create_tab_char(char *str)
{
  char		*copy;
  char		**tab;
  t_compt	val;

  copy = my_strcpy(str);
  if ((tab = malloc(sizeof(char *) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  val.i = val.k = -1;
  if ((tab[++val.k] = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  tab = take_tab(copy, str, tab, &val);
  tab[val.k + 1] = NULL;
  free(copy);
  return (tab);
}

int	main(int argc, char **argv)
{
  param(argc, argv);
  return (0);
}
