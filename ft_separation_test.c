#include "libft.h"
#include "testlibft.h"

void		ft_printsep(int c)
{
	int i = 0;
	while(i < c)
	{
		ft_putchar('=');
		i++;
	}
}
