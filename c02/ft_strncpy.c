#include <unistd.h>
char *ft_strncpy(char *dest, char *src, unsigned int nb)
{
   unsigned int i;
   i=0;
   while(src[i])
     {
	dest[i] = src[i];
	i++;
     }
   while(i<nb)
       {
	 dest[i]='\0';
	 i++;
       }
     return dest;
}
