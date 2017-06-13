/*
** food2.c for fridge in /home/Berzerk/CPE_2016_stumper4/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 11 18:22:37 2017 Antonin Hattabe
** Last update Thu May 11 19:55:24 2017 Antonin Hattabe
*/

#include "../include/fridge.h"

int     check_olive(t_tab *data, int nb, int flag)
{
  if (data->olive >= nb)
    return (0);
  else if (flag == 0)
    {
      my_put_str("'make pizza': not enough olive\n");
    }
  else if (flag == 1)
    my_put_str("'make pasta': not enough olive\n");
  return (1);
}

int     check_pepper(t_tab *data, int nb, int flag)
{
  if (data->pepper >= nb)
    return (0);
  else if (flag == 0)
    {
      my_put_str("'make pizza': not enough pepper\n");
    }
  else if (flag == 1)
    my_put_str("'make pasta': not enough pepper\n");
  return (1);
}

int     check_ham(t_tab *data, int nb, int flag)
{
  if (data->ham >= nb)
    return (0);
  else if (flag == 0)
    {
      my_put_str("'make pizza': not enough ham\n");
    }
  else if (flag == 1)
    my_put_str("'make pasta': not enough ham\n");
  return (1);
}

int     check_cheese(t_tab *data, int nb, int flag)
{
  if (data->cheese >= nb)
    return (0);
  else if (flag == 0)
    {
      my_put_str("'make pizza': not enough cheese\n");
    }
  else if (flag == 1)
    my_put_str("'make pasta': not enough cheese\n");
  return (1);
}

int     make_pizza(t_tab *data)
{
  if (check_tomato(data, 5, 0) == 0 && check_dough(data, 1, 0) == 0 &&
      check_onion(data, 3, 0) == 0 && check_pepper(data, 8, 0) == 0)
    {
      if (check_ham(data, 4, 0) == 0 && check_cheese(data, 3, 0) == 0)
	{
	  data->tomato -= 5;
	  data->dough -= 1;
	  data->onion -= 3;
	  data->pepper -= 8;
	  data->ham -= 4;
	  data->cheese -= 3;
	  if (create_save(data) == -1)
	    return (-1);
	}
    }
  return (0);
}
