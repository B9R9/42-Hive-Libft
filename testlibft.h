#ifndef TESTLIBFT_H
# define TESTLIBFT_H

# include<unistd.h>
# include<ctype.h>
# include<stdlib.h>
# include<stdio.h>
# include<string.h>
# include<fcntl.h>
# include "libft.h"

void		test_ft_putchar();
void		ft_newline();
void		ft_printsep(int	c);
void		ft_putchar_fd_test();
void		ft_putstr_test();
void		ft_putstr_fd_test();
void		ft_putendl_test();
void		ft_putendl_fd_test();
void		ft_putnbr_test();
void		ft_putnbr_fd_test();
void		ft_strlen_test();
void		ft_strjoin_test();
int			ft_read(char *str, int lenght);
void		ft_tolower_test();
void		ft_toupper_test();
void		ft_itoa_test();
void		ft_isalpha_test();
void		ft_press_enter();
void		ft_bzero_test();
void		ft_isalnum_test();
void		ft_isascii_test();
void		ft_isdigit_test();
void		ft_isprint_test();
void		ft_memccpy_test();
void		ft_memcpy_test();
void		ft_memset_test();
void		ft_strcat_test();
void		ft_strcat_test();
void		ft_strchr_test();
void		ft_strcmp_test();
void		ft_strcpy_test();
void		ft_strdup_test();
void		ft_strlcat_test();
void		ft_strncat_test();
void		ft_strncmp_test();
void		ft_strncpy_test();
void		ft_strnstr_test();
void		ft_strrchr_test();
void		ft_strstr_test();
void		ft_strequ_test();
void		ft_atoi_test();
void		ft_strnequ_test();
void		ft_strtrim_test();
void		ft_strclr_test();
void		ft_strdel_test();
void		ft_strnew_test();
void		ft_strsub_test();
void		ft_striter_test();
void		ft_striteri_test();
void		ft_memalloc_test();
void		ft_memchr_test();
void		ft_memcmp_test();
void		ft_memdel_test();
void		ft_memmove_test();
void		ft_strmap_test();
void		ft_strmapi_test();
void		ft_strsplit_test();
#endif
