#include "testlibft.h"

void	strtrim_test()
{
	char	ex[] = "     Quelques choses     ";
	char	ex1[] = "";
	char	ex2[] = "    ";
	char	ex3[] = "Hello";
	char	ex4[] = "    Rien a la fin";
	char	ex5[] = "rien au debut     ";
	char	ex6[] = "  \n   et oui \t";

	printf("STR: %s\n", ex);
	printf("Return ft_strtrim: %s\n\n", ft_strtrim(ex));
	printf("str1: %s\n", ex1);
	printf("Return ft_strtrim: %s\n\n", ft_strtrim(ex1));
	printf("STR2: %s\n", ex2);
	printf("Return ft_strtrim: %s\n\n", ft_strtrim(ex2));
	printf("str3: %s\n", ex3);
	printf("Return ft_strtrim: %s\n\n", ft_strtrim(ex3));
	printf("STR4: %s\n", ex4);
	printf("Return ft_strtrim: %s\n\n", ft_strtrim(ex4));
	printf("str5: %s\n", ex5);
	printf("Return ft_strtrim: %s\n\n", ft_strtrim(ex5));
	printf("STR6: %s\n", ex6);
	printf("Return ft_strtrim: %s\n\n", ft_strtrim(ex6));
}

void	ft_strtrim_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRTRIM");
	strtrim_test();
	ft_newline();
	ft_printsep(15);
}
