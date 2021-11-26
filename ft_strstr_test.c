
#include"testlibft.h"

void	strstr_test()
{
	char	str[] = "Aujourd'hui·y·a·du·dessert!";
	
	printf("STR: %s\n", str);
	
	printf("looking for \"xi\" return·strstr·=·%s\n", strstr(str, "xi"));
	printf("looking for \"du\" return·strstr·=·%s\n", strstr(str, "du"));
	printf("retour·ft_strstr·=·%s\n", ft_strstr(str, "xi"));
	printf("retour·ft_strstr·=·%s\n", ft_strstr(str, "du"));
}

void	ft_strstr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRSTR_TEST");
	strstr_test();
	ft_newline();
	ft_printsep(15);
}
