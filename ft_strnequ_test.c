#include "testlibft.h"

void	strnequ_test()
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";

	char	s3[] = "";
	char	s4[] = "";

	char	s5[] = "HelloHello";
	char	s6[] = "worldworld";

	char	s7[] = "	";
	char	s8[] = "	";

	char	s9[] = "	Hell oasdfghjklzxcvbnm";
	char	s10[] = "	Hell oasdfghjklzxcvbnm";

	char	s11[] = "#$&qwertyuiop";
	char	s12[] = "#$&qwertyuiop";

	char	s13[] = "\0";
	char	s14[] = "###$$@kkjwhgkng";

	char	s15[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s16[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";

	char	s17[] = "hElLo";
	char	s18[] = "HeLlO";

	printf("__SYSTEM__TEST_1__:\t 1 \t\t __YOURS__\t%d\n", ft_strnequ(s1, s2, 2));
	printf("__SYSTEM__TEST_2__:\t 1 \t\t __YOURS__\t%d\n", ft_strnequ(s3, s4, 5));
	printf("__SYSTEM__TEST_3__:\t 0 \t\t __YOURS__\t%d\n", ft_strnequ(s5, s6, 7));
	printf("__SYSTEM__TEST_4__:\t 1 \t\t __YOURS__\t%d\n", ft_strnequ(s7, s8, 1));
	printf("__SYSTEM__TEST_5__:\t 1 \t\t __YOURS__\t%d\n", ft_strnequ(s9, s10, 15));
	printf("__SYSTEM__TEST_6__:\t 1 \t\t __YOURS__\t%d\n", ft_strnequ(s11, s12, 6));
	printf("__SYSTEM__TEST_7__:\t 0 \t\t __YOURS__\t%d\n", ft_strnequ(s13, s14, 9));
	printf("__SYSTEM__TEST_8__:\t 1 \t\t __YOURS__\t%d\n", ft_strnequ(s15, s16, 10));
	printf("__SYSTEM__TEST_9__:\t 0 \t\t __YOURS__\t%d\n", ft_strnequ(s17, s18, 4));

}


void	ft_strnequ_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRNEQU TEST");
	ft_newline();
	strnequ_test();
	ft_newline();
	ft_printsep(15);
}
