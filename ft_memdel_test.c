#include "testlibft.h"

static	void	memdel_test()
{
	void	*mem;
	mem = malloc(sizeof(*mem) * 10);
	if (!mem)
		printf("malloc failed");
	else
	{
		ft_memdel(&mem);
		if (!mem)
			write(1, "NULL", 4);
		else
			write(1, "NOT NULL", 8);
	}
}

void	ft_memdel_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMDEL_TEST");
	memdel_test();
	ft_newline();
	ft_printsep(15);
}
