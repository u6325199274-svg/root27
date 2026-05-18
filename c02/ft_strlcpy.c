#include <unistd.h>
unsigned int ft_strlcpy(char *src, char *dest, unsigned int size)
{
   unsigned int i;
   unsigned int src_len;
   
   i=0;
   src_len=0;
   while(src[src_len])
     src_len++;
    
   if(size>0)
    {
      while(src[i] && i<size-1)
       {
          dest[i]=src[i];
	  i++;
	}
       dest[i]='\0';
     }
   return src_len;
}

       
