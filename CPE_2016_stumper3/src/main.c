/*
** main.c for  in /home/amoraa/Delivery/rush/CPE_2016_stumper3/src
** 
** Made by Florian Testu
** Login   <florian.testu@epitech.eu>
** 
** Started on  Wed May  3 18:17:45 2017 Florian Testu
** Last update Wed May  3 20:26:27 2017 Antonin Hattabe
*/

#include "../inc/my.h"

int	nbr_col(char *str)
{
  int	i;
  int	j;

  i = -1;
  j = 0;
  while (str[++i] != '\0')
    {
      if (str[i] == '\n')
	j++;
    }
  return (j);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	k;
  char	**tab;

  i = nbr_col(str);
  tab = malloc(sizeof(char *) * (i + 1));
  i = -1;
  while (str[++i] && str[i] != '\n');
  k = j = 0;
  tab[j] = malloc(sizeof(char) * (i + 1));
  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] == '\n')
	{
	  tab[j++][k] = '\0';
	  k = 0;
	  tab[j] = malloc(sizeof(char) * (i + 1));
	}
      else
	tab[j][k++] = str[i];
    }
  tab[j] = NULL;
  return (tab);
}

int	parsing(char **argv, int argc, t_tab *data)
{
  int	i;
  int	ret;
  char	str[4032];
  char	**end;
  
  if ((i = open(argv[2], O_RDONLY)) == -1)
    return (84);
  ret = read(i, str, 4032);
  str[ret] = '\0';
  data->tab = my_str_to_wordtab(str);
  if ((check_file(data)) == 84)
    return (84);
  remp_data(data, data->tab, argc, argv);
  end = algo(data, data->tab);
  aff_string_nb(data);
  aff_grid(data, end);
  return (0);
}

int	main(int ac, char **av)
{
  t_tab	data;

  if ((parse_argv(ac, av)) == 84)
    return (84);
  if ((parsing(av, ac, &data)) == 84)
    return (84);
  return (0);
}
