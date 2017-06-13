/*
** verif_win.c for tictactoe in /home/Berzerk/CPE_2016_stumper6/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Tue May 23 17:53:39 2017 Antonin Hattabe
** Last update Tue May 23 20:26:17 2017 Antonin Hattabe
*/

#include "../inc/headers.h"

int	check_win(t_tab *data)
{
  int	nb;
  
  if ((nb = verif_win_ligne(data)) != 0)
    return (print_win(nb));
  else if (( nb = verif_win_colon(data)) != 0)
    return (print_win(nb));
  else if ((nb = verif_win_diago1(data)) != 0)
    return (print_win(nb));
  else if ((nb = verif_win_diago2(data)) != 0)
    return (print_win(nb));
  return (0);
}

int	print_win(int nb)
{
  if (nb == 1)
    my_putstr("Player 2 won!\n");
  else if (nb == 2)
    my_putstr("Player 1 won!\n");
  return (1);
}

int	verif_win_ligne(t_tab *data)
{
  int	x;
  int	y;
  char	stock;
  
  x = 0;
  y = 0;
  while (++x <= data->size)
    {
      stock = data->map[x][1];
      while (++y <= data->size)
	{
	  if (stock == ' ' || data->map[x][y] != stock)
	    break;
	}
      if (y == data->size + 1)
	{
	  if (stock == data->p_one)
	    return (1);
	  else
	    return (2);
	}
      y = 0;
    }
  return (0);
}

int	verif_win_colon(t_tab *data)
{
  int	x;
  int	y;
  char	stock;

  x = 0;
  y = 0;
  while (++y <= data->size)
    {
      stock = data->map[1][y];
      while (++x <= data->size)
	{
	  if (stock == ' ' || data->map[x][y] != stock)
	    break;
	}
      if (x == data->size + 1)
	{
	  if (stock == data->p_one)
	    return (1);
	  else
	    return (2);
	}
      x = 0;
    }
  return (0);
}

int	verif_win_diago1(t_tab *data)
{
  int	x;
  char	stock;
  
  x = 0;
  stock = data->map[1][1];
  while (++x <= data->size)
    {
      if (stock == ' ' || data->map[x][x] != stock)
	break;
    }
  if (x == data->size + 1)
    {
      if (stock == data->p_one)
	return (1);
      else
	return (2);
    }
  return (0);
}

int	verif_win_diago2(t_tab *data)
{
  int	x;
  int	y;
  char	stock;

  x = 0;
  y = data->size;
  stock = data->map[x + 1][y];
  while (--y >= 1)
    {
      if (stock == ' ' || data->map[++x][y] != stock)
	break;
    }
  if (y == 0)
    {
      if (stock == data->p_one)
	return (1);
      else
	return (2);
    }
  return (0);
}
