
#include "testlibft.h"

void	strcat_test()
{
	char s1[25] = "Merguez";
	char s2[50] = "couscous";
	char s3[25] = "Merguez";

	printf("STR: %s\n",s2);
	printf("STRCAT RETURN    : %s\n", strcat(s2, s1));
	printf("FT STRCAT RETURN : %s\n", ft_strcat(s2, s3));
}

void	ft_strcat_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCAT_TEST");
	strcat_test();
	ft_newline();
	ft_printsep(15);
}
