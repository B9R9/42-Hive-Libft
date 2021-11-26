#include "testlibft.h"

void	memset_test()
{
	char s1[] = "Un couscous complet harissa";
	char s2[] = "Un couscous complet harissa";

	printf("STR= %s\n", s1);
	printf("__SYSTEM_RETURN  : %s\n", memset(s1, '!', 7));
	printf("ft_memset return : %s\n", ft_memset(s2, '!', 7));
}
void	ft_memset_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMESET_TEST");
	memset_test();
	ft_newline();
	ft_printsep(15);
}
