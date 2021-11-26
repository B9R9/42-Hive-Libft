#include "testlibft.h"

void	strnstr_test()
{
	char	str[] = "Le plus dur c' est pas la chute, c' est l' atterissage!";

	printf("retour·strnstr·=·%s\n", strnstr(str, "la", sizeof(str)));
	printf("retour·strnstr·=·%s\n", strnstr(str, "dur", 10));
	printf("retour·strnstr·=·%s\n", strnstr(str, "xi", 15));
	printf("retour·ft_strnstr·=·%s\n", ft_strnstr(str, "la", sizeof(str)));
	printf("retour·ft_strnstr·=·%s\n", ft_strnstr(str, "dur", 10));
	printf("retour·ft_strnstr·=·%s\n", ft_strnstr(str, "xi", 15));
}

void	ft_strnstr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNSTR_TEST");
	strnstr_test();
	ft_newline();
	ft_printsep(15);
}
