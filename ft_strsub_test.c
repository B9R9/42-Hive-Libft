#include "testlibft.h"

void	strsub_test()
{
	char	str[] = "He! Monsieur le maire! Nique sa mere au maire!";
	char	*substr;

	substr = ft_strsub(str, 5, 5);
	printf("STR: %s\n", str);
	printf("substr = ft_strsub(str, 5, 5)\n");
	printf("substr: %s\n", substr);
}

void	ft_strsub_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRSUB_TEST");
	strsub_test();
	ft_newline();
	ft_printsep(15);
}
