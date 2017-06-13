/*
** param.c for stumper in /home/Berzerk/CPE_2016_stumper7/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu Jun  1 18:24:51 2017 Antonin Hattabe
** Last update Thu Jun  1 19:35:04 2017 Antonin Hattabe
*/

#include "../inc/my.h"

void	param(int ac, char **av)
{
  if (ac == 2)
    step_one(av); 
  else if (ac >= 3)
    {
      if (ac == 4 && av[3] == NULL);
      else if(my_strcmp(av[1], "-t") == 0)
	step_three(ac, av, 3);
      else if (my_strcmp(av[1], "-r") == 0)
	step_three(ac, av, 4);
      else if (ac == 3)
	step_two(av);
    }
}

void	step_one(char **av)
{
  char	**tab;
  int	*nb;
  
  tab = create_tab_char(av[1]);
  nb = create_tab_int(tab, av[1]);
  aff_result(tab, nb);
  my_free_tab(tab);
  free(nb);
}

int	step_two(char **av)
{
  char	**tab;
  char	**tab2;
  int	*nb;

  if (av[2][0] == '\0')
    return (0);
  tab = create_tab_char(av[2]);
  tab2 = create_tab_char(av[1]);
  tab = sort_tab(tab, tab2);
  nb = create_tab_int(tab, av[1]);
  aff_result(tab, nb);
  my_free_tab(tab);
  free(nb);
  return (0);
}

void	step_three(int ac, char **av, int option)
{
  char	**tab;
  char	**tab2;
  int	*nb;

  if (ac == 3)
    {
      tab = create_tab_char(av[2]);
      nb = create_tab_int(tab, av[2]);
      sort_nb_tab(tab, nb, option);
    }
  else if (ac == 4)
    {
      tab = create_tab_char(av[3]);
      tab2 = create_tab_char(av[2]);
      tab = sort_tab(tab, tab2);
      nb = create_tab_int(tab, av[2]);
      sort_nb_tab(tab, nb, option);
      my_free_tab(tab);
      
    }
  free(nb);
}
