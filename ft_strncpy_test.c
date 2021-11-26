#include "testlibft.h"

void	strncpy_test()
{
	char	src[] = "Aujourd'hui y a du dessert! et la suite...";
//	char	dest[2];
	char	dest2[2];
	char	dest3[43];
	char	dest4[43];
	char	dest5[100];
	char	dest6[100];

	printf("SRC·=·%s\n", src);
	printf("If dest > src && len = 5:\n");
	//strncpy(dest, src, 5);
	ft_strncpy(dest2, src, 5);
	printf("strncpy return   :  you can not compil\n");
	printf("ft_strncpy return: %s\n", dest2);

	printf("if dest == src && len = 10\n");
	strncpy(dest3, src, 10);
	ft_strncpy(dest4, src, 10);
	printf("strncpy·return···: %s\n", dest3);
	printf("ft_strncpy·return: %s\n", dest4);


	printf("if·dest < src && len = 21\n");
	strncpy(dest5, src, 21);
	ft_strncpy(dest6, src, 21);
	printf("strncpy·return···: %s\n", dest5);
	printf("ft_strncpy·return: %s \n", dest6);
}

void	ft_strncpy_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNCPY_TEST");
	strncpy_test();
	ft_newline();
	ft_printsep(15);
}
