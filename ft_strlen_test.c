#include "libft.h"
#include "testlibft.h"

int		strlen_test(){
	char	userstr[100];
	char	*strarr[15] = {"C' est pas faux!",
							"En puhu sumoea",
							"Sir! Sir! On en a gros!",
							"",
							"euuuuuu, \0c est quoi la suite",
							"Et si on met\r ou un \n"};
	int i = 0;

	ft_putendl("Enter a string less then 100 caracters ");
	scanf("%s", userstr); //creation de sa fonction lire avec openclassroom

		ft_putendl(userstr);
		printf("FT_strlen return : %zu\n", ft_strlen(userstr));
		printf("Strlen    return : %lu\n", strlen(userstr));
		ft_newline();
		while(i < 6){
			ft_newline();
			printf("For the string:\n%s\n", strarr[i]);
			printf("strlen return   : %lu\n", strlen(strarr[i]));
			printf("ft_strlen return: %zu\n", ft_strlen(strarr[i]));
			i++;
	}
	return (1);
}

void	ft_strlen_test()
{
	ft_printsep(15);
	ft_newline();
	ft_putendl("FT_STRLEN TEST");
	strlen_test();
	ft_newline();
	ft_printsep(15);
}

