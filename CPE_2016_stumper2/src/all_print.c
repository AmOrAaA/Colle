/*
** all_check.c for  in /home/AmOrAA/CPE_2016_stumper2/CPE_2016_stumper2/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Apr 25 18:01:06 2017 Florian Testu
** Last update Tue Apr 25 18:25:02 2017 Florian Testu
*/

#include "../inc/my.h"

void    print_h()
{
  my_putstr("USAGE\n        ./boggle [-s SIZE] [-g GRID] [-w WORD]");
  my_putstr("\n\nDESCRIPTION\n     -s SIZE  defines the size");
  my_putstr(" of a side of the gride (def: 4\n     -g GRID");
  my_putstr("  specifies a hard-coded grid (MANDATORY).\n                   ");
  my_putstr("If the grid dos not contain the correct number of characters,\n");
  my_putstr("               you must display an error\n");
  my_putstr("      -w WORD  force the word to be looked for");
  my_putchar('\n');
}

int     check_error(char *str)
{
  int   i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
        return (84);
      if (str[i] >= 'A' && str[i] <= 'Z')
        return (84);
    }
  return (0);
}

void	print_error_str(char *str)
{
  my_putstr("The word ");
  my_putchar('"');
  my_putstr(str);
  my_putchar('"');
  my_putstr("is not in the grid.\n");    
}
