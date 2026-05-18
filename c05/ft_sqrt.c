#include <unistd.h>
int ft_sqrt(int nb)
{
   int s;

   if(nb < 0)
      return 0;

   s = 0;
   while(s*s <= nb)
   {
     if(s*s == nb)
    
      return (s);

     s++;
    }

   return (0);
}
