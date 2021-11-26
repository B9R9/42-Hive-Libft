#include "testlibft.h"

static char		mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

void		strmapi_test()
{
	char	*str;
	char	*strmapi;

	str = (char *)malloc(sizeof(*str) * 12);
	if (!str)
		printf("ERROR MALLOC");
	strcpy(str, "LoReM iPsUm");
	if (!(strmapi = ft_strmapi(str, &mapi)))
		printf("NULL");
	else
		{
			printf("STR:  %s\n",str);
			printf("Our function will turn lower case in uppercase et upper in lower\n");
			printf("After ft_strmapi: %s\n", strmapi);
			if (strmapi[11] != '\0')
				printf("\nString is not null terminated");
			if (strmapi == str)
				printf("\nA new string was not returned");
			else
				free(strmapi);
		}
	
	free(str);
}

void	ft_strmapi_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRMAPI_TEST");
	strmapi_test();
	ft_newline();
	ft_printsep(15);
}
