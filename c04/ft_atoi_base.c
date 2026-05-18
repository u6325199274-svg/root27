#include <unistd.h>
int ft_strlen(char *str)
{
   int i=0;
   while(str[i])
   {
     i++;
   }
   return i;
}
int valid_base(char *base)
{
   int i,j;

   if(ft_strlen(base)<2)
	return 0;


  i=0;
  while(base[i])
  {
      if(base[i] =='+' || base[i] =='-' || 
        base[i] >= 9   && base[i] <= 13)
	  return 0;

  j=i+1;
  while(base[j])
   {
    if(base[i] == base[j])
	    return 0;

    j++;

   }
   i++;
 }
 return 1;

}
int char_base(char c, char *base)
{  
   int i=0;
   while(base[i])
  {
   if(base[i] == c)
    return i;

    i++;
   }
   return -1;
}
int ft_atoi_base(char *str, char *base)
{
  int i=0;
  int sign=1;
  int result=0;
  int value;
  int base_len;

  base_len=ft_strlen(base);

  if(!valid_base(base))
	return 0;
  

    while(str[i] >= 9 && str[i] <= 13 ||
       str[i] == ' ' )
	   i++;
    

  while(str[i] == '+' || str[i] == '-')
   {
     if(str[i] == '-')
     sign = -sign;
     i++;

   }
 
  value=char_base(str[i], base);
  while(value!=-1)
  { 
    result = result * base_len +value;
    i++;
    value = char_base(str[i], base);  

   }

   return result*sign;

}



