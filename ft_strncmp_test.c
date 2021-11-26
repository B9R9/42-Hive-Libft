#include "testlibft.h"

void	strncmp_test()
{
	char	str[] = "Pas·folle·la·guepe";
	char	str1[]= "Humilite,·c'est·quand·y·a un probleme·d'·infiltration";
	char	str2[]= "Humilite";

	printf("Retour·strncmp·=·%d\n", strncmp(str, str1, 10));
	printf("Retour·strncmp·=·%d\n", strncmp(str1, str, 5));
	printf("Retour·strncmp·=·%d\n", strncmp(str1, str2, 40));

	printf("Retour·ft_strncmp·=·%d\n", ft_strncmp(str, str1, 10));
	printf("Retour·ft_strncmp·=·%d\n", ft_strncmp(str1, str, 5));
	printf("Retour·ft_strncmp·=·%d\n", ft_strncmp(str1, str2, 40));
}

void	ft_strncmp_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNCMP_TEST");
	strncmp_test();
	ft_newline();
	ft_printsep(15);
}
