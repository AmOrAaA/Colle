/*
** builtin.c for tictactoe in /home/Berzerk/CPE_2016_stumper6/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Tue May 23 18:12:36 2017 Antonin Hattabe
** Last update Tue May 23 18:13:20 2017 Antonin Hattabe
*/

#include "../inc/headers.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	x;

  x = -1;
  while (str[++x] != '\0')
    my_putchar(str[x]);
}
