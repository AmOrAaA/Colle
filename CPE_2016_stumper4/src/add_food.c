/*
** add_food.c for fridge in /home/Berzerk/CPE_2016_stumper4/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 11 18:38:24 2017 Antonin Hattabe
** Last update Thu May 11 20:47:59 2017 Florian Testu
*/

#include "../include/fridge.h"

int     check_line2(char *str)
{
  int   i;
  int   j;

  i = -1;
  j = 0;
  while (str[++i] != '\0')
    {
      if (str[i] == ' ')
	j++;
    }
  return (j);
}

int     my_str_to_tab2(char *str, int i)
{
  int   j;

  j = i;
  while (str[j] != ' ')
    j++;
  return (j);
}

char    **my_str_to_wordtab2(char *str)
{
  int   i;
  int   j;
  int   k;
  char  **tab;

  j = check_line2(str);
  if ((tab = malloc(sizeof(char *) * (j + 1))) == NULL)
    return (NULL);
  j = k = i = 0;
  if ((tab[j] = malloc(sizeof(char) * my_str_to_tab2(str, i) + 1)) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	{
	  tab[j][k] = '\0';
	  k = 0;
	  if ((tab[++j] = malloc(sizeof(char) * my_str_to_tab2(str, ++i) + 1)) == NULL)
	    return (NULL);
	}
      else
	tab[j][k++] = str[i++];
    }
  tab[j] = NULL;
  return (tab);
}


int	add_to_fridge(t_tab *data, char *str)
{
  char	**tab;
  int	nb;

  tab = my_str_to_wordtab2(str);
  if (tab[2] != NULL && my_strcmp(tab[0], "addToFridge") == 0
      && my_isnum(tab[2]) == 0)
    {
      nb = my_getnbr(tab[2]);
      add_to_fridge2(data, nb, tab);
      create_save(data);
      return (0);
    }
  return (1);
}

void	add_to_fridge2(t_tab *data, int nb, char **tab)
{
  if (my_strcmp(tab[1], "tomato") == 0)
    data->tomato += nb;
  else if (my_strcmp(tab[1], "dough") == 0)
    data->dough += nb;
  else if (my_strcmp(tab[1], "onion") == 0)
    data->onion += nb;
  else if (my_strcmp(tab[1], "pasta") == 0)
    data->pasta += nb;
  else if (my_strcmp(tab[1], "olive") == 0)
    data->olive += nb;
  else if (my_strcmp(tab[1], "pepper") == 0)
    data->pepper += nb;
  else if (my_strcmp(tab[1], "ham") == 0)
    data->ham += nb;
  else if (my_strcmp(tab[1], "cheese") == 0)
    data->cheese += nb;
}
