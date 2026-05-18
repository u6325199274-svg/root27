#include <unistd.h>
#include <stdlib.h>
char *ft_strjoin(int size, char **str, char *sep);
int main()
{ 

  char *arr[] = { "salut", "42", "piscine"};
  char *result;
   
  result = ft_strjoin(3, arr, " ");

  
    printf("%s\n",result);

    return 0;
  
}
