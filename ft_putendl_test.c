#include "libft.h"
#include "testlibft.h"

void	putendl_test()
{
	ft_putendl("The next string should at the line");
	ft_putendl("And cxrxpx  should be at the line");
}

void		ft_putendl_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putstr("FT_PUTENDL TEST\n");
	putendl_test();
	ft_printsep(15);

}
