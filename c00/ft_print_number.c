#include <unistd.h>
void ft_print_number(void)
{
	char c;
	c='0';
	while(c<='9')
	{
	   write(1,&c,1);
	   c++;
	}
}
int main(void)
{
	ft_print_number();
	write(1,"\n",1);
	return 0;
}
