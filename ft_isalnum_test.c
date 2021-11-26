#include"testlibft.h"

void	isalnum_test()
{
	char c = 'C';

	int a = c;
	printf("%c isalnum = %d ft_isalnum = %d\n", c, isalnum(a), ft_isalnum(a));
}
void	ft_isalnum_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_ISALNUM_TEST");
	isalnum_test();
	ft_newline();
	ft_printsep(15);
}
