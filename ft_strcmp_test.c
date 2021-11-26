#include "testlibft.h"

void	strcmp_test()
{
	char	str[] = "Pas·folle·la·guepe";
	char	str1[]= "Humilite,·c'est·quand·y·a un·probleme·d'·infiltration";
	char	str2[]= "Humilite";
 
		printf("Retour·strcmp·=·%d\n", strcmp(str, str1));
		printf("Retour·strcmp·=·%d\n", strcmp(str1, str));
		printf("Retour·strcmp·=·%d\n", strcmp(str1, str2));

		printf("Retour·ft_strcmp·=·%d\n", ft_strcmp(str, str1));
		printf("Retour·ft_strcmp·=·%d\n", ft_strcmp(str1, str));
		printf("Retour·ft_strcmp·=·%d\n", ft_strcmp(str1, str2));
}

void	ft_strcmp_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCMP_TEST");
	strcmp_test();
	ft_newline();
	ft_printsep(15);
}
