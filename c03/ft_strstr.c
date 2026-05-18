#include <unistd.h>
char *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;

  i=0;
  if(to_find[0] == '\0')
     return str;
  
  while(str[i])
  {
    j=0;
    while(str[i+j] && to_find[i] && to_find[i] !='\0')
    {
      j++;
    }
    if(to_find[i] == '\0')
	return (&str[i]);
    i++;
  }
  return 0;
}

