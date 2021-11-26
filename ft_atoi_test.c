#include "testlibft.h"
#include "libft.h"

void	atoi_test()
{
	char a[] = "-2147483648";
	char b[] = "2147483647";
	char c[] = "-99999999999";
	char d[] = "99999999999";
	char e[] = "-0";
	char f[] = "+0";
	char g[] = "---00";
	char h[] = "-#4$0";
	char i[] = "123123";
	char j[] = " \t\n\r\n\v12";
	char k[] = "";
	char l[] = "\0";
	char m[] = "0";

	printf("__SYSTEM__TEST_1__:\t %d \t __YOURS__\t%d\n", atoi(a), ft_atoi(a));
	printf("__SYSTEM__TEST_2__:\t %d \t __YOURS__\t%d\n", atoi(b), ft_atoi(b));
	printf("__SYSTEM__TEST_3__:\t %d \t __YOURS__\t%d\n", atoi(c), ft_atoi(c));
	printf("__SYSTEM__TEST_4__:\t %d \t __YOURS__\t%d\n", atoi(d), ft_atoi(d));
	printf("__SYSTEM__TEST_5__:\t %d \t\t __YOURS__\t%d\n", atoi(e), ft_atoi(e));
	printf("__SYSTEM__TEST_6__:\t %d \t\t __YOURS__\t%d\n", atoi(f), ft_atoi(f));
	printf("__SYSTEM__TEST_7__:\t %d \t\t __YOURS__\t%d\n", atoi(g), ft_atoi(g));
	printf("__SYSTEM__TEST_8__:\t %d \t\t __YOURS__\t%d\n", atoi(h), ft_atoi(h));
	printf("__SYSTEM__TEST_9__:\t %d \t __YOURS__\t%d\n", atoi(i), ft_atoi(i));
	printf("__SYSTEM__TEST_10__:\t %d \t\t __YOURS__\t%d\n", atoi(j), ft_atoi(j));
	printf("__SYSTEM__TEST_11__:\t %d \t\t __YOURS__\t%d\n", atoi(k), ft_atoi(k));
	printf("__SYSTEM__TEST_12__:\t %d \t\t __YOURS__\t%d\n", atoi(l), ft_atoi(l));
	printf("__SYSTEM__TEST_13__:\t %d \t\t __YOURS__\t%d\n", atoi(m), ft_atoi(m));
}

void	ft_atoi_test()
{
	ft_printsep(15);
	ft_newline();
	ft_atoi("FT_ATOI TEST");
	ft_newline();
	atoi_test();
	ft_newline();
	ft_printsep(15);
}
