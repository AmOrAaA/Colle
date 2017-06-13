/*
** food.c for fridge in /home/Berzerk/CPE_2016_stumper4/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 11 18:09:20 2017 Antonin Hattabe
** Last update Thu May 11 19:58:26 2017 Antonin Hattabe
*/

#include "../include/fridge.h"

int	check_tomato(t_tab *data, int nb, int flag)
{
  if (data->tomato >= nb)
    return (0);
  else if (flag == 0)
    {
      my_put_str("'make pizza': not enough tomato\n"); 
    }
  else if (flag == 1)
    my_put_str("'make pasta': not enough tomato\n");
  return (1);
}

int     check_dough(t_tab *data, int nb, int flag)
{
  if (data->dough >= nb)
    return (0);
  else if (flag == 0)
    {
      my_put_str("'make pizza': not enough dough\n");
    }
  else if (flag == 1)
    my_put_str("'make pasta': not enough dough\n");
  return (1);
}

int     check_onion(t_tab *data, int nb, int flag)
{
  if (data->onion >= nb)
    return (0);
  else if (flag == 0)
    {
      my_put_str("'make pizza': not enough onion\n");
    }
  else if (flag == 1)
    my_put_str("'make pasta': not enough onion\n");
  return (1);
}

int     check_pasta(t_tab *data, int nb, int flag)
{
  if (data->pasta >= nb)
    return (0);
  else if (flag == 0)
    {
      my_put_str("'make pizza': not enough pasta\n");
    }
  else if (flag == 1)
    my_put_str("'make pasta': not enough pasta\n");
  return (1);
}

int	make_pasta(t_tab *data)
{
  if (check_tomato(data, 5, 1) == 0 && check_pasta(data, 2, 1) == 0 &&
      check_olive(data, 6, 1) == 0 && check_cheese(data, 3, 1) == 0)
    {
      if (check_ham(data, 4, 0) == 0)
	{
	  data->tomato -= 5;
	  data->pasta -= 2;
	  data->olive -= 6;
	  data->cheese -= 3;
	  data->ham -= 4;
	  if (create_save(data) == -1)
	    return (-1);
	}
    }
  return (0);
}
