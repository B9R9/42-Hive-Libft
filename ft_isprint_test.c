#include"testlibft.h"

void	isprint_test()
{
	char c = '9';

	int a = c;
	printf("%c isprint = %d        ft_isprint = %d\n", c, isprint(a), ft_isprint(a));
}
void	ft_isprint_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_ISPRINT_TEST");
	isprint_test();
	ft_newline();
	ft_printsep(15);
}
