#include"testlibft.h"

static void	memalloc_test()
{
	char	*str;

	str = (char *)ft_memalloc(30);
	if(!str)
		write(1, "NULL", 4);
	else
		write(1, str, 30);
	free(str);
}

void		ft_memalloc_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMALLOC_TEST");
	memalloc_test();
	ft_newline();
	ft_printsep(15);
}
