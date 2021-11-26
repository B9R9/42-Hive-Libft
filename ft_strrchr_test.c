
#include"testlibft.h"

void	strrchr_test()
{
	char	str[] = "Toujours et encore str";
	printf("STR: %s    -> ft_strrchr(str,'o')\n", str);
	printf("Retour·FT_strrchr·=·%s\n", ft_strrchr(str, 'o'));
	printf("Retour····strrchr·=·%s\n", strrchr(str, 'o'));

}

void	ft_strrchr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRRCHR_TEST");
	strrchr_test();
	ft_newline();
	ft_printsep(15);
}
