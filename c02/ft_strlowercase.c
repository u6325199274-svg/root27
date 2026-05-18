#include <unistd.h>
char *ft_strlowercase(char *str)
{
     int i=0;
     while(str[i])
     {
       if(str[i]>='A' && str[i]<='Z')
	  str[i]=str[i]+32;
       i++;
     }
   return str;
}
