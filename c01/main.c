#include <unistd.h>
#include <stdio.h>
int  ft_sort_int_tab(int  *tab, int size);
void ft_putchar(char c)
{
     write(1,&c,1);
}
void ft_putnbr(int nb)
{
    if(nb>=10)
       ft_putnbr(nb/10);
    ft_putchar(nb%10+'0');
}

int main()
{
   int arr[] = {1, 2, 4, 3, 5};
   int size  = 5;
   int i;

   
   ft_sort_int_tab(arr, size);


   i=0;
   while(i < size)
     {
        ft_putnbr(arr[i]);
	ft_putchar(' ');
	i++;
      }
    
     ft_putchar('\n');
     return 0;
}

