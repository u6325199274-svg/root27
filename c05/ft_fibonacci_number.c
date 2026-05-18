#include <unistd.h>
int ft_fibonacci_number(int index)
{
    if(index < 0)
       return (-1);

    if(index == 0)
	return (0);

    if(index == 1)
	return (1);

    return (ft_fibonacci_number(index - 1) + 
            ft_fibonacci_number(index - 2));
}
