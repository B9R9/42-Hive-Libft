#include"testlibft.h"

void	memcpy_test()
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s3	= strdup("Hello");
	s4	= strdup("Hello");
	s2 = malloc(sizeof(*s4));
	s1 = malloc(sizeof(*s3));

	char	*s5;
	char	*s6;
	char	*s7;
	char	*s8;

	s7	= strdup("");
	s8	= strdup("");
	s6 = malloc(sizeof(*s8));
	s5 = malloc(sizeof(*s7));

	char	*s9;
	char	*s10;
	char	*s11;
	char	*s12;

	s11	= strdup("123Hello");
	s12	= strdup("123Hello");
	s10 = malloc(sizeof(*s12));
	s9 = malloc(sizeof(*s11));

	char	*s13;
	char	*s14;
	char	*s15;
	char	*s16;

	s15	= strdup("\0");
	s16	= strdup("\0");
	s14 = malloc(sizeof(*s16));
	s13 = malloc(sizeof(*s15));

	char	*s17;
	char	*s18;
	char	*s19;
	char	*s20;

	s19	= strdup("#$&");
	s20	= strdup("#$&");
	s18 = malloc(sizeof(*s20));
	s17 = malloc(sizeof(*s19));

	char	*s21;
	char	*s22;
	char	*s23;
	char	*s24;

	s23	= strdup("99999999999");
	s24	= strdup("99999999999");
	s22 = malloc(sizeof(*s24));
	s21 = malloc(sizeof(*s23));

	printf("__SYSTEM__TEST_1__:\t %s \t\t __YOURS__:\t%s\n", memcpy(s2, s4, 3), ft_memcpy(s1, s3, 3));
	printf("__SYSTEM__TEST_2__:\t %s \t\t __YOURS__:\t%s\n", memcpy(s6, s8, 3), ft_memcpy(s5, s7, 3));
	printf("__SYSTEM__TEST_3__:\t %s \t\t __YOURS__:\t%s\n", memcpy(s10, s12, 3), ft_memcpy(s9, s11, 3));
	printf("__SYSTEM__TEST_4__:\t %s \t\t __YOURS__:\t%s\n", memcpy(s14, s16, 3), ft_memcpy(s13, s15, 3));
	printf("__SYSTEM__TEST_5__:\t %s \t\t __YOURS__:\t%s\n", memcpy(s18, s20, 3), ft_memcpy(s17, s19, 3));
	printf("__SYSTEM__TEST_6__:\t %s \t\t __YOURS__:\t%s\n", memcpy(s22, s24, 3), ft_memcpy(s21, s23, 3));

}

void	ft_memcpy_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_MEMCPY TEST");
	ft_newline();
	memcpy_test();
	ft_newline();
	ft_printsep(15);
}
