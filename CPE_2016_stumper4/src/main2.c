/*
** main2.c for  in /home/amoraa/CPE_2016_stumper4/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 11 20:33:04 2017 Florian Testu
** Last update Thu May 11 20:57:12 2017 Antonin Hattabe
*/

#include "../include/fridge.h"

void	print_unknow(char *str)
{
  int	i;
  
  i = -1;
  my_putchar(39);
  while (str[++i] != ' ');
  while (str[++i] != '\0')
    my_putchar(str[i]);
  my_putchar(39);
  my_put_str(": meal unknown\n");
}

int	second_create(int ret, char *str, t_tab *fridge, int i)
{
   while ((ret = read(1, str, 4096)) > 0)
    {
      str[ret] = '\0';
      if ((my_strcmp(str, "make pizza")) == 0)
        make_pizza(fridge);
      else if ((my_strcmp(str, "make pasta")) == 0)
        make_pasta(fridge);
      else if ((my_strcmp(str, "disp fridge")) == 0)
        disp_fridge(fridge);
      else if ((my_strcmp(str, "exit")) == 0)
        return (0);
      else if ((my_strcmp(str, "make cheese")) == 2)
	print_unknow(str);
      else if (add_to_fridge(fridge, str) == 0);
      else
        {
          my_putstr(str);
          my_putstr(": Invalid operation");
          my_putchar('\n');
        }
    }
   return (0);
}
