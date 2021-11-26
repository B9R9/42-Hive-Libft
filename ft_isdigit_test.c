#include "testlibft.h"

void	isdigit_test()
{
	printf("retour isdigit	  ' ' = %d\n", isdigit(' '));
	printf("retour ft_isdigit ' ' = %d\n", ft_isdigit(' '));
	printf("retour isdigit		A = %d\n", isdigit('A'));
	printf("retour ft_isdigit	A = %d\n", ft_isdigit('A'));
	printf("retour isdigit		1 = %d\n", isdigit('1'));
	printf("retour ft_isdigit	1 = %d\n", ft_isdigit('1'));
}

void	ft_isdigit_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_ISDIGIT_TEST");
	isdigit_test();
	ft_newline();
	ft_printsep(15);
}
