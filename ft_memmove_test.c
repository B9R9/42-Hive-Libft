#include "testlibft.h"

/*static void		check_memmove(void *dest, void *src, int n)
{
	if (dest != ft_memmove(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
}
*/
static	void	memmove_test()
{
/*	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	check_memmove(dest, "consectetur", 5);
	//check_memmove(dest, "con\0sec\0\0te\0tur", 10);
	//check_memmove(dest, src, 8);
	//check_memmove(src, dest, 8);
	//check_memmove(src, dest, 0);
*/
	int i = 0;
	int	arr[] = {20, 30, 40, 50, 60, 70 ,80, 90, 100, 0};
	void *src = (void *)arr;
	void *dest = (void *)(arr + 1);
	printf("Before FT_memmove: \n");
	while(i < 10)
	{
		printf("Valeur de dest[%d] : %d\n", i, arr[i]);
		i++;
	}
	ft_memmove(dest, src, 9 * sizeof(int));
	arr[0] = 10;
	i = 0;
	printf("After ft_memmove:\n");
	while (i < 10)
	{
		printf("Valeur de dest[%d] : %d\n", i, arr[i]);
		i++;
	}
}

void	ft_memmove_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMMOVE_TEST");
	memmove_test();
	ft_newline();
	ft_printsep(15);
}
