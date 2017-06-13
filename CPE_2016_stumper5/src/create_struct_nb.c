/*
** create_struct_nb.c for crocus in /home/Berzerk/CPE_2016_stumper5/src
** 
** Made by Antonin Hattabe
** Login   <Berzerk@epitech.net>
** 
** Started on  Thu May 18 17:38:17 2017 Antonin Hattabe
** Last update Thu May 18 18:33:49 2017 Antonin Hattabe
*/

#include "../include/headers.h"

t_tab	create_struct()
{
  t_tab		data;

  data.zero = tab_zero();
  data.one = tab_one();
  data.two = tab_two();
  data.three = tab_three();
  data.four = tab_four();
  data.five = tab_five();
  data.six = tab_six();
  data.seven = tab_seven();
  data.eight = tab_eight();
  data.nine = tab_nine();
  return (data);
}
