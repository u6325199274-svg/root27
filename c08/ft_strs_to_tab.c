#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>
int ft_strlen(char *str)
{ 
   int i;
   i = 0;
   while(str[i])
  {
    write(1, &str[i], 1);
    i++;
  }
 return i;
}
char *ft_dup(char *src)
{ 
  int i =0;
  char *copy;

  copy = malloc(sizeof(ft_strlen(src+1)));
  if(!copy)
      return NULL;

  while(src[i])
  {
   copy[i] = src[i];
   i++;
  }
  src[i] ='\0';
  return copy;
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
  int i = 0;
  t_stock_str *tab;

  tab = malloc(sizeof(t_stock_str) * ac+1);
      if(!tab)
       return NULL;

  while(i < ac)
  {
    tab[i]. size = ft_strlen(av[i]);
    tab[i]. str  = av[i];
    tab[i]. copy = ft_dup(av[i]);
    i++;
  }

  tab[i]. size = 0;
  tab[i]. str  = 0;
  tab[i]. copy = 0;
  
 return tab;
}
