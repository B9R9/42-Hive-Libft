#include "testlibft.h"


/*	static void		ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}
*/
	static void	memcmp_test()
{
/*		pr
		ft_print_result(ft_memcmp("salut", "salut", 5));
		ft_print_result(ft_memcmp("t\200", "t\0", 2));
		ft_print_result(ft_memcmp("testss", "test", 5));
		ft_print_result(ft_memcmp("test", "tEst", 4));
		ft_print_result(ft_memcmp("", "test", 4));
		ft_print_result(ft_memcmp("test", "", 4));
		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7));
		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6));
		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));*/
	int	arr[] = {4, 8, 15, 'b', 23, 42};
	int arr2[] = {4, 8 , 15, 'a', 23, 42};
	int ret2 = 0;


	int ret = ft_memcmp(arr, arr2,6 * sizeof(int));
	printf("Le retour de la valeur de ret est = %d\n", ret);
	ret2 = memcmp(arr, arr2, 6 * sizeof(int));
	printf ("Le retour de memcmp est: %d\n", ret2);
}

void	ft_memcmp_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMCMP_TEST");
	memcmp_test();
	ft_newline();
	ft_printsep(15);
}
