#include "testlibft.h"

static	void	memchr_test()
{
	char	arr[] = {10, 20, 30, 40, 50 ,60, 70, 80, 90, 100};
	const unsigned int size = 10;

	void	*found = ft_memchr(arr, 57, size);
	printf ("valeur de found: %s\n", ((char *) found));
	printf("57 is %s\n", (found != NULL ? "found" : "not found"));

	found = ft_memchr(arr, 50, size);
	printf("50 is in %s\n",(found != NULL ? "found" : "not found"));

	if(found != NULL)
		printf("La valeur a la position calcule est %d\n",* ((char *) found));

}

void	ft_memchr_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMCHR_TEST");
	memchr_test();
	ft_newline();
	ft_printsep(15);
}
