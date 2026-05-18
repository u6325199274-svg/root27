#include <unistd.h>
void ft_putnbr(int nb)
{  
   char c;
   long n;
   n=nb;

   if(n<0)
   {
      write(1,"-",1);
      n=-n;
   }


      if(n>=10)
      ft_putnbr(n/10);
      c=((n%10)+'0');
      write(1,&c,1);
   
}
