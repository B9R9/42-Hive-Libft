#include "testlibft.h"

void	bzero_test()
{
	int i = 0;

	char	s1[] = "une baguette, merci !";
	char	s2[] = "une baguette, merci !";
	char	s3[] = "une baguette, merci !";
	
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	printf("bzero(s1, 5)\n");
	printf("ft_bzero(s2 ,5)\n");
	printf("----------------------------\n");
	printf("Original ");
	printf("|");
	printf("  bzero");
	printf("|");
	printf("ft_bzero |\n");
	printf("----------------------------\n");
	bzero(s2, 5);
	ft_bzero(s3, 5);
	i = 0;
	while(i < 21)
	{
		printf("   %c    ||   %c   ||    %c   |\n",s1[i], s2[i], s3[i]);
		printf("----------------------------\n");
		i++;
	}

	

}

void	ft_bzero_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_BZERO_TEST");
	bzero_test();
	ft_newline();
	ft_printsep(15);
}
