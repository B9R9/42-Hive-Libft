#include "testlibft.h"

void	strncat_test()
{
	char	str[20] = "Hello     ";
	char	str2[] = "World!";
	char	str3[20] = "Hello     ";
	char	str4[] = "World!";
	strncat(str, str2, 3);
	ft_strncat(str3, str4, 3);
	printf("Resultat    strncat= %s\n", str);
	printf("Resultat ft_strncat= %s\n", str3);
}
void	ft_strncat_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNCAT_TEST");
	strncat_test();
	ft_newline();
	ft_printsep(15);
}
