#include "testlibft.h"

void	memccpy_test()
{
	char s1[30];
	char s3[30];
	char s2[30] = "une chipo ! Aux epices";

	memccpy(s1, s2, '!', 15);
	ft_memccpy(s3, s2, '!', 15);
	printf("str= %s\n", s2);
	printf("Output memccpy    = %s\n", s1);
	printf("Output ft_memccpy = %s\n", s3);
}

void	ft_memccpy_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMCCPY_TEST");
	memccpy_test();
	ft_newline();
	ft_printsep(15);
}
