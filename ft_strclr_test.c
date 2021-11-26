#include "testlibft.h"

void	strclr_test()
{
	char	str[] = "Ne bougez pas!Ou je tire une balle dans la tete a la main!";
	
	printf("str:\n%s\n", str);
	ft_strclr(str);

	printf("After ft_strclr str return:\n%s\n",str);
}

void ft_strclr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCLR TESTT");
	strclr_test();
	ft_newline();
	ft_printsep(15);
}
