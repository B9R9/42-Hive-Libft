#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briffard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 08:08:13 by briffard          #+#    #+#              #
#    Updated: 2021/11/25 16:23:26 by briffard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
TEST=libtest.a

TESTFILE=	ft_putchar_test.c		ft_newline_test.c		ft_separation_test.c	\
			ft_putchar_fd_test.c	ft_putstr_test.c		ft_putstr_fd_test.c		\
			ft_putendl_test.c		ft_putendl_fd_test.c	ft_putnbr_test.c		\
			ft_putnbr_fd_test.c		ft_strlen_test.c		ft_fgets_test.c			\
			ft_tolower_test.c		ft_toupper_test.c		ft_atoi_test.c			\
			ft_isalpha_test.c		ft_itoa_test.c			ft_press_enter_test.c	\
			ft_strjoin_test.c		ft_bzero_test.c			ft_isalnum_test.c		\
			ft_isascii_test.c		ft_isdigit_test.c		ft_isprint_test.c		\
			ft_memccpy_test.c		ft_memcpy_test.c		ft_memset_test.c		\
			ft_strcat_test.c		ft_strchr_test.c		ft_strcmp_test.c		\
			ft_strcpy_test.c		ft_strdup_test.c		ft_strlcat_test.c		\
			ft_strncat_test.c		ft_strncmp_test.c		ft_strncpy_test.c		\
			ft_strnstr_test.c		ft_strrchr_test.c		ft_strstr_test.c		\
			ft_strequ_test.c		ft_strnequ_test.c		ft_strtrim_test.c		\
			ft_strclr_test.c		ft_strdel_test.c		ft_strnew_test.c		\
			ft_strsub_test.c		ft_striter_test.c		ft_striteri_test.c		\
			ft_memalloc_test.c		ft_memchr_test.c		ft_memcmp_test.c		\
			ft_memdel_test.c		ft_memmove_test.c 		ft_strmapi_test.c		\
			ft_strmap_test.c		ft_strsplit_test.c		\


FILES=	ft_putchar.c	ft_putchar_fd.c		ft_putendl.c		ft_tolower.c		\
		ft_putendl_fd.c	ft_putnbr.c			ft_putnbr_fd.c		ft_toupper.c		\
		ft_putstr.c		ft_putstr_fd.c		ft_strlen.c			ft_atoi.c			\
		ft_isalpha.c	ft_itoa.c			ft_strjoin.c		ft_bzero.c			\
		ft_isalnum.c	ft_isascii.c		ft_isdigit.c		ft_isprint.c		\
		ft_memccpy.c	ft_strnew.c			ft_memcpy.c			ft_memset.c			\
		ft_strcat.c		ft_strchr.c			ft_strcmp.c			ft_strcpy.c			\
		ft_strdup.c		ft_strlcat.c		ft_strncat.c		ft_strncmp.c		\
		ft_strncpy.c	ft_strnstr.c		ft_strrchr.c		ft_strstr.c			\
		ft_strequ.c		ft_strnequ.c		ft_strtrim.c		ft_isspace.c		\
		ft_strclr.c		ft_strdel.c			ft_strsub.c			ft_striter.c		\
		ft_striteri.c	ft_memalloc.c		ft_memchr.c			ft_memcmp.c			\
		ft_memdel.c		ft_memmove.c		ft_strmapi.c		ft_strmap.c			\
		ft_strsplit.c	ft_cleanstr.c	\

OBJ=$(SRC:.c=.o)

INCL=libft.h

RM=rm -f

CC=gcc
CCFLAGS=-Werror -Wall -Wextra

all: $(NAME) $(TEST)

$(NAME):
	@echo "Compiling..."
	$(CC) $(CCFLAGS) -c $(FILES)
	@echo "Creation of libft.h"
	ar rc $(NAME) *.o
	@echo "Libft.h created."
	ranlib $(NAME)

$(TEST):
	@echo "Compiling ..."
	$(CC) $(CCFLAGS) -c $(TESTFILE)
	@echo "Creation of testlibft.h"
	ar rc $(TEST) *test.o
	@echo "Testlibft has been created"
	ranlib $(TEST)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all
