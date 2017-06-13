/*
** main.c for  in /home/AmOrAA/CPE_2016_stumper1/src
**
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
**
** Started on  Tue Apr 18 15:17:51 2017 Florian Testu
** Last update Tue Apr 18 18:48:07 2017 Florian Testu
*/

#include "../inc/my.h"

int	pattern_zero()
{
  my_putchar('#');
  my_putchar('\n');
  return (0);
}

int	pattern_1(char *chain1)
{
  int	i;

  i = -1;
  while (chain1[++i] != '\0')
    {
      if (chain1[i] == '@')
	chain1[i] = '\n';
      my_putchar(chain1[i]);
    }
  my_putchar('\n');
  return (0);
}

int	main(int argc, char **argv)
{
  int	pattern;
  char	**tab;

  if ((all_check(argc, argv)) == 84)
    return (84);
  pattern = my_getnbr(argv[1]);
  if (pattern == 0)
    pattern_zero();
  else if (pattern == 1)
    pattern_1(argv[2]);
  else if (pattern == 2 || pattern == 3)
    {
      tab = create_motif(pattern);
      pattern_2(argv[2], argv[3], tab);
    }
  else
    {
      write(2, "Error: bad argument\n", 21);
      return (84);
    }
  return (0);
}
