#include"libft.h"
#include"testlibft.h"

void	tolower_test()
{
	int i = 0;
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char soluce[27];
	char lower[27];
	while(upper[i]) {
		lower[i] = ft_tolower(upper[i]);
		soluce[i] = tolower(upper[i]);
		i++;
	}
	printf("Out expected : %s\n", soluce);
	printf("Your output  : %s\n", lower);

	printf("Try to print ?\nft_tolower return: %c\n",ft_tolower('?'));
	printf("Tolower return   : %c\n", tolower('?'));
}

void	ft_tolower_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_TOLOWER TEST");
	tolower_test();
	ft_newline();
	ft_printsep(15);
}
