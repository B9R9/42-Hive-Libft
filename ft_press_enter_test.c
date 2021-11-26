#include "libft.h"
#include "testlibft.h"

void	ft_press_enter()
{
	printf("\n\nPress enter to continue...\n");
	while(getchar() != '\n');
}
