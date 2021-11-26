#include "testlibft.h"

void	strlcat_test()
{
	char	buf[50];
	char	dst[] = "0123456789";
	char	src[] = "abcde";
	int		ret;

	char	buf2[50];
	char	dst2[] = "0123456789";
	char	src2[] = "abcde";
	int		ret2;

	strcpy(buf2, dst2);
	strcpy(buf, dst);
	ret = ft_strlcat(buf, src, 10);
	ret2 = strlcat(buf2, src2, 10);
	printf("len·ft_strlcat··=·%d\n", ret);
	printf("len·strlcat·····=·%d\n", ret2);
	printf("ft_strlcat·buf··=·%s\n", buf);
	printf("strlcat·buf2····=·%s\n", buf2);

	printf("\n");
	strcpy(buf2, dst2);
	strcpy(buf, dst);
	ret = ft_strlcat(buf, src, 14);
	ret2 = strlcat(buf2, src, 14);
	printf("len·ft_strlcat·=·%d\n", ret);
	printf("len·strlcat····=·%d\n", ret2);
	printf("ft_strlcat·buf·=·%s\n", buf);
	printf("strlcat·buf2···=·%s\n", buf2);


	printf("\n");
	strcpy(buf2, dst2);
	strcpy(buf, dst);

	ret = ft_strlcat(buf, dst, 10);
	ret2 = strlcat(buf2, dst2, 10);
	printf("len·ft_strlcat·=·%d\n", ret);
	printf("len·strlcat····=·%d\n", ret2);
	printf("ft_strlcat·buf·=·%s\n", buf);
	printf("strlcat·buf2···=·%s\n", buf2);

	printf("\n");
	strcpy(buf, src);
	strcpy(buf2, src2);
	ret = ft_strlcat(buf, dst, 14);
	ret2 = strlcat(buf2, dst2, 14);
	printf("len ft_strlcat·=·%d\n", ret);
	printf("len strlcat····=·%d\n", ret2);
	printf("ft_strlcat·buf·=·%s\n", buf);
	printf("strlcat·buf2···=·%s\n", buf2);
}
void	ft_strlcat_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRLCAT_TEST");
	strlcat_test();
	ft_newline();
	ft_printsep(15);
}
