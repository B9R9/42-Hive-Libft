#include "testlibft.h"

static char		iter(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else if (c >= 'A' && c <= 'Z')
	{	
		c = c + 32;
		return (c);
	}
	return (c);
}

static void		strmap_test()
{
	char	*str;
	char	*map;
	
	map = NULL;
	str = (char *)malloc(sizeof(*str) * 22);
	if(!str)
		ft_putstr("NULL");
	else
	{
		strcpy(str, "Quoi dE neUf dOctOr !");
		printf("STR:  %s\n",str);
		map = ft_strmap(str, &iter);
	}
	printf("Our function will turn lower case in uppercase et upper in lower\n");
	printf("After str: %s\n",map);

	free(str);

}	

void		ft_strmap_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRMAP_TEST");
	strmap_test();
	ft_newline();
	ft_printsep(15);
}
