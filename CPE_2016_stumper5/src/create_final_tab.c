/*
** create_final_tab.c for crocus in /home/Berzerk/CPE_2016_stumper5/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 18 17:45:04 2017 Antonin Hattabe
** Last update Thu May 18 20:26:04 2017 Florian Testu
*/

#include "../include/headers.h"

char	**return_good_data(t_tab *data, char arg)
{
  if (arg == '0')
    return (data->zero);
  else if (arg == '1')
    return (data->one);
  else if (arg == '2')
    return (data->two);
  else if (arg == '3')
    return (data->three);
  else if (arg == '4')
    return (data->four);
  else if (arg == '5')
    return (data->five);
  else if (arg == '6')
    return (data->six);
  else if (arg == '7')
    return (data->seven);
  else if (arg == '8')
    return (data->eight);
  else if (arg == '9')
    return (data->nine);
  return (NULL);
}

char	***final_tab(t_tab *data, char *argument)
{
  char	***tab;
  int	pos;

  pos = 0;
  if ((tab = malloc(sizeof(char**) * (my_strlen(argument) + 1))) == NULL)
    return (NULL);
  while (argument[pos] != '\0')
    {
      tab[pos] = return_good_data(data, argument[pos]);
      pos++;
    }
  tab[pos] = NULL;
  return (tab);
}

void	aff_nb(char ***tab, char *argument)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (y < 5)
    {
      while (tab[x] != NULL)
	{
	  my_putstr(tab[x][y]);
	  if (x + 1 < my_strlen(argument))
	    my_putchar(' ');
	  x++;
	}
      my_putchar('\n');
      y++;
      x = 0;
    }
}
