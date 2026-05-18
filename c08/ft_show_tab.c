#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
void  ft_putstr(char *str)
{
   int i=0;
   while(str[i])
   {
     write(1,&str[i], 1);
     i++;

   }
}
void ft_putnbr(int nb)
{
   char c;
   long n;
   n = nb;

   if(n < 0)
   write(1, "-", 1);
   n = -n;

   if(n >= 10)
   ft_putnbr(n / 10);
   c = (n%10) + '0';
   write(1, &c, 1);
}
void ft_show_tab(struct s_stock_str *ptr)
{
  int x =0;
  while(ptr[x].str !=0)
  {
    ft_putstr(ptr[x].str);
    write(1, "\n", 1);
    ft_putnbr(ptr[x].size);
    write(1, "\n", 1);
    ft_putstr(ptr[x].copy);
    write(1, "\n", 1);

    x++;
   }
}
