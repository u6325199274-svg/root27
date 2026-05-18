#include <stdio.h>
#include <unistd.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
void ft_putstr(char *str)
{
    int i=0;
    while(str[i])
    {
      write(1,&str[i],1);
      i++;
    }
    
}
int main()
{
   char dest[20] = "Hello";
   char src[]  = "world";
   unsigned int n;

   n=12;

   ft_strlcat(dest, src, n);
   ft_putstr(dest);

   write(1,"\n",1);
   return 0;
}


