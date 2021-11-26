#include "libft.h"
#include "testlibft.h"

int main()
{
	int	userchoice;
	int	functionchoice;

	printf("***************************************************************************\n");
	printf("********************** Welcome to this LIBFT tester!***********************\n");
	printf("***************************************************************************\n");


printf("\nHere we gonna try to test your librairie in different way. Sometimes we will\n");
printf("ask you to participate. So be ready and let's start !\n");

//Use  do while to create a loop for the menu until we decide to quit
ft_putchar('\n');
do{
printf("**********************************  MENU ***********************************\n");
printf("---- To choose your function to test.                Press 1\n");
printf("---- To test all function from the part1.            Press 2\n");
printf("---- To test all functions from the part 2.          Press 3\n");
printf("---- To test everything.                             Press 4\n");
printf("---- To exit.                                        Press 0\n");
printf("Your choice ? ");
scanf("%d", &userchoice);// Need safety in case the return is not expected

switch(userchoice)
{
	case 1:
		do{
		ft_newline();
		// we can use an arr with all function name sorted by alphabetic order and a while loop to print
		printf("Choose the function:\n\n");
		printf("1  - FT_PUTCHAR		11 - FT_TOLOWER		21 - FT_MEMCCPY		31 - FT_STRNCMP		41 - FT_STRNEW		51 - FT_STRMAPI\n");
		printf("2  - FT_PUTCHAR_FD	12 - FT_TOUPPER		22 - FT_MEMCPY		32 - FT_STRNCPY		42 - FT_STRSUB		52 - FT_STRSPLIT\n");
		printf("3  - FT_PUTSTR		13 - FT_ISALPH		23 - FT_MEMSET		33 - FT_STRNSTR		43 - FT_STRITER\n");
		printf("4  - FT_PUTSTR_FD	14 - FT_ITOA		24 - FT_STRCAT		34 - FT_STRRCHR		44 - FT_STRITERI\n");
		printf("5  - FT_PUTENDL		15 - FT_STRJOIN		25 - FT_STRCHR		35 - FT_STRSTR		45 - FT_MEMALLOC\n");
		printf("6  - FT_PUTENDL_FD	16 - FT_BZERO		26 - FT_STRCMP		36 - FT_STREQU		46 - FT_MEMCHR\n");
		printf("7  - FT_PUTNBR		17 - FT_ISALNUM		27 - FT_STRCPY		37 - FT STRNEQU		47 - FT_MEMCMP\n");
		printf("8  - FT_PUTNBR_FD	18 - FT_ISACII		28 - FT_STRDUP		38 - FT_STRTRIM		48 - FT_MEMDEL\n");
		printf("9  - FT_STRLEN		19 - FT_ISDIGIT		29 - FT_STRLCAT		39 - FT_STRCLR		49 - FT_MEMMOVE\n");
		printf("10 - FT_ATOI		20 - FT_ISPRINT		30 - FT_STRNCAT		40 - FT_STRDEL		50 - FT_STRMAP\n");
		printf("\nTo return to the main menu Press 0\n");
		ft_newline();
		printf("Your choice? "); // option for typing the name of the function if we do that we need to pass every letter to upper or lower to avoid mistake typing
		scanf("%d", &functionchoice);
		switch(functionchoice)
		{
			case 1:
				ft_newline();
				test_ft_putchar();
				break;
			case 2:
				ft_newline();
				ft_putchar_fd_test();
				break;
			case 3:
				ft_newline();
				ft_putstr_test();
				break;
			case 4:
				ft_newline();
				ft_putstr_fd_test();
				break;
			case 5:
				ft_newline();
				ft_putendl_test();
				break;
			case 6:
				ft_newline();
				ft_putendl_fd_test();
				break;
			case 7:
				ft_newline();
				ft_putnbr_test();
				break;
			case 8:
				ft_newline();
				ft_putnbr_fd_test();
				break;
			case 9:
				ft_newline();
				ft_strlen_test();
				break;
			case 10:
				ft_newline();
				ft_atoi_test();
				break;
			case 11:
				ft_newline();
				ft_tolower_test();
				break;
			case 12:
				ft_newline();
				ft_toupper_test();
				break;
			case 13:
				ft_newline();
				ft_isalpha_test();
				break;
			case 14:
				ft_newline();
				ft_itoa_test();
				break;
			case 15:
				ft_newline();
				ft_strjoin_test();
				break;
			case 16:
				ft_newline();
				ft_bzero_test();
				break;
			case 17:
				ft_newline();
				ft_isalnum_test();
				break;
			case 18:
				ft_newline();
				ft_isascii_test();
				break;
			case 19:
				ft_newline();
				ft_isdigit_test();
				break;
			case 20:
				ft_newline();
				ft_isprint_test();
				break;
			case 21:
				ft_newline();
				ft_memccpy_test();
				break;
			case 22:
				ft_newline();
				ft_memcpy_test();
				break;
			case 23:
				ft_newline();
				ft_memset_test();
				break;
			case 24:
				ft_newline();
				ft_strcat_test();
				break;
			case 25:
				ft_newline();
				ft_strchr_test();
				break;
			case 26:
				ft_newline();
				ft_strcmp_test();
				break;
			case 27:
				ft_newline();
				ft_strcpy_test();
				break;
			case 28:
				ft_newline();
				ft_strdup_test();
				break;
			case 29:
				ft_newline();
				ft_strlcat_test();
				break;
			case 30:
				ft_newline();
				ft_strncat_test();
				break;
			case 31:
				ft_newline();
				ft_strncmp_test();
				break;
			case 32:
				ft_newline();
				ft_strncpy_test();
				break;
			case 33:
				ft_newline();
				ft_strnstr_test();
				break;
			case 34:
				ft_newline();
				ft_strrchr_test();
				break;
			case 35:
				ft_newline();
				ft_strstr_test();
				break;
			case 36:
				ft_newline();
				ft_strequ_test();
				break;
			case 37:
				ft_newline();
				ft_strnequ_test();
			case 38:
				ft_newline();
				ft_strtrim_test();
			break;
			case 39:
				ft_newline();
				ft_strclr_test();
			case 40:
				ft_newline();
				ft_strdel_test();
				break;
			case 41:
				ft_newline();
				ft_strnew_test();
				break;
			case 42:
				ft_newline();
				ft_strsub_test();
				break;
			case 43:
				ft_newline();
				ft_striter_test();
				break;
			case 44:
				ft_newline();
				ft_striteri_test();
				break;
			case 45:
				ft_newline();
				ft_memalloc_test();
				break;
			case 46:
				ft_newline();
				ft_memchr_test();
				break;
			case 47:
				ft_newline();
				ft_memcmp_test();
				break;
			case 48:
				ft_newline();
				ft_memdel_test();
				break;
			case 49:
				ft_newline();
				ft_memmove_test();
				break;
			case 50:
				ft_newline();
				ft_strmap_test();
				break;
			case 51:
				ft_newline();
				ft_strmapi_test();
				break;
			case 52:
				ft_newline();
				ft_strsplit_test();
				break;
		}
		}while(functionchoice != 0);
		break;

}
}while(userchoice != 0);
}
