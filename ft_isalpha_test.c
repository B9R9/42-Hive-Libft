#include "libft.h"
#include "testlibft.h"

void	isalpha_test()
{
	char c;
	int i = 0;
	int a = 1;
	int b = 2;
	c = 127;
	while(i < c){
		printf("Char= %c                 | char   = %c | char   = %c |\n", c, c - a, c - b);
		printf("return of isplha    = %d | return = %d | return = %d |\n", isalpha(c), isalpha(c - a), isalpha(c - b));
		printf("return of ft_isalpha= %d | return = %d | return = %d |\n", ft_isalpha(c), ft_isalpha(c - a), ft_isalpha(c -b));
		printf("---------------------------------------------------\n");
		c = c - (a + b);
		c--;
	}
}

void	ft_isalpha_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_ISALPHA TEST");
	isalpha_test();
	ft_newline();
	ft_printsep(15);
}
