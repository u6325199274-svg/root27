#include <stdio.h>
#include <unistd.h>
unsigned int ft_strlcpy(char *src, char *dest, unsigned int size);
void ft_putnbr(int nb)
{
   char c;

   if(nb>=10) 
     ft_putnbr(nb/10);
     
     c= nb % 10 + '0';
     write(1,&c,1);
}

int main()
{
     char src[] = "hell world";
     char dest[25];
     unsigned int len;
     
     len=ft_strlcpy(src,dest,6);
     write(1, dest, 5);

     ft_putnbr(len);
     write(1,"\n",1);

     return 0;

}
	
