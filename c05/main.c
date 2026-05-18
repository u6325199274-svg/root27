#include <unistd.h>
#include <stdio.h>
int ft_find_next_prime(int nb);
int main()
{
   int number = 7;
   int result;

   result = ft_find_next_prime(number);
   printf("%d\n",result);
   return 0;
}
