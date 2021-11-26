
#include "testlibft.h"

void	strchr_test()
{
	char	*str;
	char	*str2;
	char s1[50] = "Mais a la vie, je dit oui";
	str = strchr(s1, 'v');
	str2 = ft_strchr(s1, 'v');
	printf("STR: %s\n", s1);
	printf("__SYSTEM_RETURN : %s\n", str);
	printf("FT_STRCHR RETURN: %s\n", str2);
}

void	ft_strchr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRCHR_TEST");
	strchr_test();
	ft_newline();
	ft_printsep(15);
}
