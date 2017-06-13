/*
** main.c for  in /home/amoraa/CPE_2016_stumper4/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 11 17:29:30 2017 Florian Testu
** Last update Thu May 11 20:53:38 2017 Antonin Hattabe
*/

#include "../include/fridge.h"

void	my_put_str(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    my_putchar(str[i]);
}

int	disp_fridge(t_tab *fridge)
{
  my_put_str("tomato = ");
  my_putnbr(fridge->tomato);
  my_put_str("\ndough = ");
  my_putnbr(fridge->dough);
  my_put_str("\nonion = ");
  my_putnbr(fridge->onion);
  my_put_str("\npasta = ");
  my_putnbr(fridge->pasta);
  my_put_str("\nolive = ");
  my_putnbr(fridge->olive);
  my_put_str("\npepper = ");
  my_putnbr(fridge->pepper);
  my_put_str("\nham = ");
  my_putnbr(fridge->ham);
  my_put_str("\ncheese = ");
  my_putnbr(fridge->cheese);
  my_putchar('\n');
  return (0);
}

int	remp_fridge(t_tab *fridge, int i)
{
  char	str[4096];
  char	**tab;
  int	ret;
  int	j;

  ret = read(i, str, 4032);
  str[ret] = '\0';
  tab = my_str_to_wordtab(str);
  remp_tomato(fridge, tab);
  remp_dough(fridge, tab);
  remp_onion(fridge, tab);
  remp_pasta(fridge, tab);
  remp_olive(fridge, tab);
  remp_pepper(fridge, tab);
  remp_ham(fridge, tab);
  remp_cheese(fridge, tab);
  return (0);
}

int	create_food(t_tab *fridge, int i)
{
  int	ret;
  char	str[4096];

  second_create(ret, str, fridge, i);
  return (0);
}

int	main(int argc, char **argv)
{
  int	i;
  t_tab	fridge;

  if ((i = open(".save", O_RDONLY)) == -1)
    {
      init_struct(&fridge);
      create_save(&fridge);
    }
  // else
    //    remp_fridge(&fridge, i);
  close(i);
  create_food(&fridge, i);
  return (0);
}
