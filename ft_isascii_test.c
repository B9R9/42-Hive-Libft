#include"testlibft.h"

void 	isascii_test()
{
	int i =  0;
	while(i < 127 )
	{
		printf("Caractere ASCII %c\n", i);
		printf("ISASCII return    = %d\n", isascii(i));
		printf("FT_ISASCII return = %d\n", ft_isascii(i));
		i++;
	}
}

void	ft_isascii_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_ISASCII_TEST");
	isascii_test();
	ft_newline();
	ft_printsep(15);
}
