#include "libft.h"
#include "testlibft.h"

void	itoa_test()
{
	int	i;
	int	count;
	int arr[] = {0, 1, 15, 165, 2864, 12564, 122345, 1234567, 12345678,123456789, 1234567890,
				-1, -10, -100, -1000, -10000, -100000, -1000000, -10000000, -100000000,
				-2147483648, 2147483647};
	i = 0;
	while(i < 22)
	{
		printf("TESTS WITH POSITIVE NUMBERS\n\n\n");
		count = 0;
		while(arr[i] >=  0 && arr[i] < 2100000000)
		{
			printf("%d Checking POSITIVE decimal numbers BEFORE ft_itoa\n", arr[i]);
			i++;
			count++;
		}
		i = 0;
		printf("\n\n");
		while(arr[i] >=  0 && arr[i] < 2100000000)
		{
			printf("%s Checking POSITIVE numbers turned to strings AFTER itoa\n", ft_itoa(arr[i]));
			i++;
			count++;
		}
		printf("\n\n");
		printf("Positive number with itoa: %s\n", count == 22 ? "OK\n\n" : "KO\n\n");
		printf("--------------------------------------------------------------\n\n");
		printf("TESTS WITH NEGATIVE NUMBERS\n\n\n");
		count = 0;
		while(arr[i] < 0 && arr[i] > -2111111111)
		{
			printf("%d Checking NEGATIVE decimal numbers BEFORE ft_itoa\n", arr[i]);
			i++;
			count++;
		}
		i = 11;
		printf("\n\n");
		while(arr[i] < 0 && arr[i] > -2111111111)
		{
			printf("%s Checking NEGATIVE numbers turned to strings AFTER itoa\n", ft_itoa(arr[i]));
			i++;
			count++;
		}
		printf("\n\n");
		printf("Negative number: %s\n", count == 18 ? "OK\n\n" : "KO\n\n");
		printf("--------------------------------------------------------------\n\n");
		printf("TESTS WITH EXTREME NUMBERS\n\n\n");
		count = 0;
		while(arr[i] > 2100000000 || arr[i] < -2111111111 )
		{
			printf("%d Checking NEGATIVE decimal numbers BEFORE ft_itoa\n", arr[i]);
			i++;
			count++;
		}
		while(arr[i] > 2100000000 || arr[i] < -2111111111 )
		{
			printf("%s Checking NEGATIVE numbers turned to strings AFTER itoa\n", ft_itoa(arr[i]));
			i++;
			count++;
		}
		printf("\n\n");
		printf("Extreme number: %s\n", count == 2 ? "OK\n\n" : "KO\n\n");
	}
}

void	ft_itoa_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_ITOA TEST");
	ft_newline();
	itoa_test();
	ft_newline();
	ft_printsep(15);
}
