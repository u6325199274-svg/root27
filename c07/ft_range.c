#include <unistd.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{  
   int i;
   int size;
   int *arr;

   if(min > max)
      return NULL;

   size = max - min;
   arr = malloc(sizeof(int)*(size));
    
    if(!arr)
       return NULL;
    
    i=0;
    while(i < size)
    {
      arr[i] = min+i;
      i++;
    
    }
    
    return arr;
}
