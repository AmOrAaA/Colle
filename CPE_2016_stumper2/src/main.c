/*
** main.c for  in /home/AmOrAA/CPE_2016_stumper2/CPE_2016_stumper2/src
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Tue Apr 25 15:15:59 2017 Florian Testu
** Last update Tue Apr 25 18:47:55 2017 Florian Testu
*/

#include "../inc/my.h"

void	my_putstr(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    my_putchar(str[i]);
}

int	my_getnbr(char *str)
{
  int	i;
  int	odg;
  int	nb;

  i = 0;
  nb = 0;
  odg = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	odg = odg * -1;
      i++;
    }
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10 + str[i] - 48;
      i++;
    }
  nb = nb * odg;
  return (nb); 
}

int	algo(char **tab, char *word, int size)
{
  char	*str;

  aff_map(tab, size + 4);
  search_word(tab, word, size);
  aff_map(tab, size);
  while (1)
    {
      str = my_get_next_line(0);
      if ((search_word(tab ,str, size)) != 0)
  	print_error_str(str);
      else
  	return (0);
    }
}

int	main(int argc, char **argv)
{
  int	i;
  int	j;
  int	size;
  char **tab;
  char	*word;

  size = 0;
  i = -1;
  if (argc == 1)
    return (84);
  while (argv[++i] != NULL)
    {
      j = -1;
      while (argv[i][++j] != '\0')
	{
	  if ((tab = check_tab(argv, i, j, size)) == NULL)
	    return (84);
	  if ((size = check_size(argv, i, j, size)) == 84)
	    return (84);
	  if ((word = check_word(argv, i, j, word)) == NULL)
	    return (84);
	  if ((check_h(argv, i, j)) == 84)
	    return (0);
	}
    }
  algo(tab, word, size);
  return (0);
}
