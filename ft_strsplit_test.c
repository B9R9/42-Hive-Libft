#include "testlibft.h"


static void	strsplit_test()
{	
	int		i = 0;
	char	**ex;
	char	**ex1;
	char	**ex2;
	char	**ex3;
	char	**ex4;

	char	str[] = "**Hello*fellow**students*One*";
	char	str1[] = "oneword";
	char	str2[] = "";
	char	str3[] = " ";
	char	str4[] = "    euuuuh    ya      quoi";

	printf("Original STR: %s\n", str);
	printf("Results after ft_strsplit:\n");
	ex = ft_strsplit(str, '*');
	while(i < 4){
		printf("%s\n", ex[i]);
		i++;
	}

	i = 0;
	printf("Original STR1: %s\n", str1);
	printf("Results after ft_strsplit:\n");
	ex1 = ft_strsplit(str1, 'y');
	printf("%s\n", ex1[0]);

	i = 0;
	printf("Original STR2: %s\n", str2);
	printf("Results after ft_strsplit:\n");
	ex2 = ft_strsplit(str2, 'a');
	while(i < 1){
		printf("%s\n",ex2[i]);
		i++;
	}
	i = 0;

	printf("Original STR3: %s\n", str3);
	printf("Results after ft_strsplit:\n");
	ex3 = ft_strsplit(str3,  'j');
	while(i < 2){
		printf("%s\n",ex3[i]);
		i++;
	}
	i = 0;

	printf("Original STR4: %s\n", str4);
	printf("Results after ft_strsplit:\n");
	ex4 = ft_strsplit(str4, ' ');
	while(i < 3){
		printf("%s\n",ex4[i]);
		i++;
	}
}

void	ft_strsplit_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRSPLIT_TEST");
	strsplit_test();
	ft_newline();
	ft_printsep(15);
}
