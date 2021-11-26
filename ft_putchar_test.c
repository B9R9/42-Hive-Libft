#include "testlibft.h"
#include "libft.h"


int		test_ft_putchar_ascii()
{
	char	buff[130];
	char	buff2[130];

	for (int i = 0; i < 128; i++) {
		ft_putchar(i);
		buff2[i] = i;
	}
	ft_newline();
	for (int i = 0; i < 128; i++) {
		if (buff[i] != buff2[i]) {
			return(-1);
		}
	}
	return(1);
}

void	test_ft_putchar()
{
	ft_printsep(15);
	ft_newline();
	printf("FT_PUTCHAR TEST\n");
	printf("Print all characters from ASCII table: %s\n", test_ft_putchar_ascii()? "OK" : "KO");
	ft_printsep(15);
	ft_newline();
}
