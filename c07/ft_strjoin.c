#include <unistd.h>
#include <stdlib.h>
int ft_strlen(char *str)
{
   int i=0;
   while(str[i])
   {
     write(1,&str[i],1);
     i++;
   }
   return i;
}
char *ft_strjoin(int size, char **str, char *sep)
{
  int i,j,k;
  int len;
  char *res;

  len=0;

  if(size == 0)
   {
     res = malloc(1);
     if(!res) 
     return 0;

     res[0] = '\0';
     return res;
   }

  while(i < size)
  {
    len += ft_strlen(str[i]);
     i++;
   }

      len += ft_strlen(sep)*(size -1);

      res = malloc(len+1);
      
      if(!res)
       return 0;

    
    i=0;
    k=0;

    while(i < size)
    {
      while(str[i][j])
       res[k++] = str[i][j++];


   if(i < size-1)
    {
       j =0;
      while(sep[j])
      res[k++] = sep[j++];
     }
   i++;
    }
    res[k] ='\0';
    return res;
}




