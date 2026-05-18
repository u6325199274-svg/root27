#include <unistd.h>
#include <stdlib.h>
int ft_strlen(char *str)
{
   int i;
   i=0;
   while(str[i]) 
   {
     write(1,&str[i],1);
     i++;
   }
  return i;
}
char *ft_strdup(char *src)
{
  int i;
  int len = ft_strlen(src);
  char *dup;

  dup = (char *)malloc(sizeof(char)*(len+1));
     if(!dup)
    {
      return NULL;
    }

  while(src[i])
  {
    dup[i] = src[i];
    i++;
  }
  dup[i] ='\0';
  return (dup);
}
	

  
