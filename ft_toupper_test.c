#include "libft.h"
#include "testlibft.h"

void	toupper_test()
{
	int		i = 0;
	char	lower[] = "abdcdefghijklmnopqrstuvwxyz";
	char	soluce[27];
	char	upper[27];
	while(lower[i]) {
		upper[i] = ft_toupper(lower[i]);
		soluce[i] = toupper(lower[i]);
		i++;
	}
	printf("Out expected : %s\n", soluce);
	printf("Your·output : %s\n", upper);
	printf("Try to print?\nft_toupper return: %c\n", ft_toupper('?'));
	printf("Toupper return:%c\n",toupper('?'));
}
void	ft_toupper_test(){
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_TOUPPER TEST");
	toupper_test();
	ft_newline();
	ft_printsep(15);
}
