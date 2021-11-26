#include "testlibft.h"

void	strnew_test()
{
	char	*str;
	int		i = 0;

	str = ft_strnew(5);
	printf("We have created un str of 5 char cal str.\n");
	if(!str)
		write(1,"NULL", 4);
	else
	{
		while(i < 5){
			str[i] = 'a';
			i++;
		}
		printf("STR= %s\n", str);
	}
	free(str);
}

void	ft_strnew_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNEW_TEST");
	strnew_test();
	ft_newline();
	ft_printsep(15);
}
