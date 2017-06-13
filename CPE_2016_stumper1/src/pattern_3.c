/*
** pattern_3.c for stumper1 in /home/Berzerk/tmp
**
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
**
** Started on  Tue Apr 18 17:50:42 2017 Antonin Hattabe
** Last update Tue Apr 18 20:18:37 2017 Antonin Hattabe
*/

#include "../inc/my.h"

char	*cut_pattern(char *pattern, int option, int clean)
{
  static int a[2];
  int	x;
  int	stock_end;
  int	count_str;
  char	*str_cut;

  count_str = 0;
  if (clean == 1 && (a[0] = a[1] = 0) == 0)
    return (NULL);
  x = a[option];
  stock_end = x;
  while (pattern[x] != '\0' && pattern[x] != '@')
    x++;
  if ((str_cut = malloc(sizeof(char) * (x - stock_end))) == NULL)
    return (NULL);
  while (pattern[stock_end] != '\0' && pattern[stock_end] != '@')
    {
      str_cut[count_str] = pattern[stock_end];
      count_str++;
      stock_end++;
    }
  x++;
  a[option] = x;
  return (str_cut);
}

void	printf_pat(char *pattern, char *chain_a, char *chain_b, int nb_bs)
{
  char	*chain_bis_a;
  char	*chain_bis_b;
  int	x;
  int	check_nb_bs;

  x = check_nb_bs = 0;
  while (check_nb_bs <= nb_bs)
    {
      chain_bis_a = cut_pattern(chain_a, 0, 0);
      chain_bis_b = cut_pattern(chain_b, 1, 0);
      while (pattern[x] != '\0')
	{
	  if (pattern[x] == 'A')
	    my_putstr(chain_bis_a);
	  else if (pattern[x] == 'B')
	    my_putstr(chain_bis_b);
	  x++;
	}
      my_putchar('\n');
      check_nb_bs++;
      x = 0;
    }
}

int	search_nb_bs(char *str)
{
  int x;
  int	nb_bs;

  x = nb_bs = 0;
  while (str[x] != '\0')
    {
      if (str[x] == '@')
	nb_bs++;
      x++;
    }
  return (nb_bs);
}

void	pattern_2(char *pattern_a, char *pattern_b, char **pattern)
{
  int	pattern_nb;
  int	nb_bs;

  pattern_nb = 0;
  nb_bs = search_nb_bs(pattern_a);
  while (pattern[pattern_nb] != '\0')
    {
      printf_pat(pattern[pattern_nb], pattern_a, pattern_b, nb_bs);
      cut_pattern(pattern_a, 0, 1);
      pattern_nb++;
    }
}
