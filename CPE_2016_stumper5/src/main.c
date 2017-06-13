/*
** main.c for  in /home/amoraa/CPE_2016_stumper5/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Thu May 18 17:30:42 2017 Florian Testu
** Last update Thu May 18 20:25:38 2017 Florian Testu
*/

#include "../include/headers.h"

char	*take_magic_nbr(char **argv)
{
  int	i;
  int	j;
  char	*cpy;

  i = 0;
  while (argv[++i] != NULL)
    {
      j = -1;
      while (argv[i][++j] != '\0')
	{
	  if (argv[i][j] >= '0' && argv[i][j] <= '9')
	    {
	      if ((check_magic(argv, i)) == 84)
		return (NULL);
	      if ((cpy = malloc(sizeof(char) * my_strlen(argv[i]) + 1)) == NULL)
		return (NULL);
	      j = -1;
	      while (argv[i][++j] != '\0')
		cpy[j] = argv[i][j];
	      cpy[j] = '\0';
	      return (cpy);
	    }
	}
    }
  return (NULL);
}

char	*take_custom(char **argv)
{
  int	i;
  int	j;
  char	*copy;

  i = -1;
  while (argv[++i] != NULL)
    {
      if ((my_strcmp("-s", argv[i])) == 0)
	{
	  i++;
	  if ((copy = malloc(sizeof(char) * my_strlen(argv[i]) + 1)) == NULL)
	    return (NULL);
	  j = -1;
	  while (argv[i][++j] != '\0')
	    copy[j] = argv[i][j];
	  copy[j] = '\0';
	  return (copy);
	}
    }
  return (NULL);
}

int	check_custom(char *custom, char *magic)
{
  int	i;
  int	result;
  int	len;

  i = 0;
  result = magic[0];
  while (magic[++i] != '\0')
    {
      if (result < magic[i])
	result = magic[i];
    }
  len = my_strlen(custom);
  if (result > len)
    return (84);
  return (0);
}

int	main(int argc, char **argv)
{
  char	***tab;
  t_tab	data;
  char	*magic;
  char	*custom;
  int	x;

  if (argc < 2 || argc > 5 || argc == 4)
    return (84);
  if ((check_argv(argv)) == 84)
    return (84);
  if ((check_all(argv)) == 84)
    return (84);
  if ((magic = take_magic_nbr(argv)) == NULL)
    return (84);
  if ((custom = take_custom(argv)) != NULL)
    x = 2;
  else
    x = 1;
  data = create_struct();
  tab = final_tab(&data, magic);
  if (x == 2)
    aff_nb_custom(tab, magic, custom);
  else if (x == 1)
    aff_nb(tab, magic);
  return (0);
}
