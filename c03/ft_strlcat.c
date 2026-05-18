#include <unistd.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int i;
  unsigned int j;
  unsigned int src_len;
  unsigned int dest_len;

  i=0;
  while(dest[i])
	  i++;
  dest_len=i;

  j=0;
  while(src[j])
	  j++;
  src_len=j;
  {
    if(size <= dest_len)
	return (size+src_len);
  }

  i=dest_len;
  j=0;
  while(src[j] && (i+1) < size)
  { 
    dest[i] = src[j];
    i++;
    j++;	
  }
  dest[i]='\0';
  return (dest_len+src_len);
}
