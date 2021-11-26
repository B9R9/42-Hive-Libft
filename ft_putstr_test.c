#include "libft.h"
#include "testlibft.h"

void		printtest()
{	int i = 0;
	char *str[] = {"Aujourd'hui, y a du dessert!",
					"Aujourd\n'hui y a\r du dess\tert!",
					"",
					"Aujour\0d hiu ya du dessert"};

	while(i < 4)
	{
		write(1,"Your output is: ",17);
		ft_putstr(str[i]);
		ft_newline();
		printf("Output expeted: %s\n", str[i]);
		i++;
	}
}

void	ft_putstr_test()
{
	ft_printsep(15);
	ft_newline();
	printf("FT_PUTSTR TEST\n");
	ft_newline();
	printtest();
	ft_printsep(15);
}
