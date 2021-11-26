#include "libft.h"
#include "testlibft.h"

void putnbr_test()
{
	int i = 0;
	int count = 0;
	int arr[] = {0, 1, 15, 165, 2864, 12564, 122345, 1234567, 12345678,123456789, 1234567890,
				-1, -10, -100, -1000, -10000, -100000, -1000000, -10000000, -100000000,
				-2147483648, 2147483647};
	while(i < 22)
	{
		while(arr[i] >=  0 && arr[i] < 2100000000) {
			ft_putnbr(arr[i]);
			ft_putstr(", ");
			i++;
			count++;
		}
		ft_newline();
		printf("Positive number: %s\n", count == 11 ? "OK" : "KO");
		count = 0;
		while(arr[i] < 0 && arr[i] > -2111111111) {
			ft_putnbr(arr[i]);
			ft_putstr(", ");
			i++;
			count++;
		}
		ft_newline();
		printf("Negatif number: %s\n", count == 9 ? "OK" : "KO");
		count = 0;
		while(arr[i] > 2100000000 || arr[i] < -2111111111 ) {
			ft_putnbr(arr[i]);
			ft_putstr(", ");
			i++;
			count++;
		}
		ft_newline();
		printf("Extreme number: %s\n", count == 2 ? "OK" : "KO");
	}

}

void	ft_putnbr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_PUTNBR TEST");
	ft_newline();
	putnbr_test();
	ft_newline();
	ft_printsep(15);


}
