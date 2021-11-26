#include "testlibft.h"

void	strcpy_test()
{
	char	src[] = "BONSOIR MULHOUSE";
	char	dst[50];
	char	dst2[50];

	ft_strcpy(dst, src);
	strcpy(dst2,src);

	printf("STR       :  %s\n", src);
	printf("STRCPY    :  %s\n", dst);
	printf("FT STRCPY :  %s\n", dst2);
}

void	ft_strcpy_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCPY_TEST");
	strcpy_test();
	ft_newline();
	ft_printsep(15);
}
