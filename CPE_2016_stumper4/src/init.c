/*
** init.c for fridge in /home/Berzerk/CPE_2016_stumper4/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 11 17:34:10 2017 Antonin Hattabe
** Last update Thu May 11 19:44:36 2017 Antonin Hattabe
*/

#include "../include/fridge.h"

void	init_struct(t_tab *data)
{
  data->tomato = 50;
  data->dough = 50;
  data->onion = 50;
  data->pasta = 50;
  data->olive = 50;
  data->pepper = 50;
  data->ham = 50;
  data->cheese = 50;
}

int	create_save(t_tab *data)
{
  int	fd;

  if ((fd = open(".save", O_CREAT | O_TRUNC | O_RDWR, S_IRWXU | S_IRWXG | S_IRWXO)) == -1)
      return (-1);
  write(fd, "tomato = ", 9);
  my_putnbrfd(fd, data->tomato);
  write(fd, "dough = ", 8);
  my_putnbrfd(fd, data->dough); 
  write(fd, "onion = ", 8);
  my_putnbrfd(fd, data->onion);
  write(fd, "pasta = ", 8);
  my_putnbrfd(fd, data->pasta);
  write(fd, "olive = ", 8);
  my_putnbrfd(fd, data->olive);
  write(fd, "pepper = ", 9);
  my_putnbrfd(fd, data->pepper);
  write(fd, "ham = ", 6);
  my_putnbrfd(fd, data->ham);
  write(fd, "cheese = ", 9);
  my_putnbrfd(fd, data->cheese);
  return (0);
}
