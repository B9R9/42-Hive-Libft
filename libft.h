/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:13:24 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 14:17:42 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<unistd.h>
# include<ctype.h>
# include<stdlib.h>
# include<stdio.h>
# include<string.h>
# include<fcntl.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void		ft_putchar(char c);
void		ft_putchar_fd(char	c, int	fd);
void		ft_putendl(char const	*s);
void		ft_putendl_fd(char const	*s, int	fd);
void		ft_putnbr(int	n);
void		ft_putnbr_fd(int	n, int	fd);
void		ft_putstr(char const	*s);
void		ft_putstr_fd(char const	*s, int	fd);
size_t		ft_strlen(char const *s);
int			ft_tolower(int	c);
int			ft_toupper(int	c);
int			ft_atoi(const char	*str);
int			ft_isalpha(int	c);
char		*ft_itoa(int	n);
char		*ft_strnew(size_t size);
char		*ft_strjoin(char const	*s1, char const	*s2);
void		ft_bzero(void	*s, size_t	n);
int			ft_isalnum(int	c);
int			ft_isdigit(int	c);
int			ft_isascii(int c);
int			ft_isprint(int	c);
void		*ft_memccpy( void	*dest, const void	*src, int c, size_t n);
void		*ft_memcpy(void	*dest, const void	*src, size_t n);
void		*ft_memset(void	*s, int	c, size_t	n);
char		*ft_strcat(char	*s1, char	*s2);
char		*ft_strchr(const char	*s, int c);
int			ft_strcmp(const char	*s1, const  char	*s2);
char		*ft_strcpy(char	*dst, const char	*src);
char		*ft_strdup(const char	*s1);
size_t		ft_strlcat(char	*dst, const char	*src, size_t	dstsize);
char		*ft_strncat(char	*s1, char	*s2, size_t	n);
int			ft_strncmp(const char	*s1, const char	*s2, size_t	n);
char		*ft_strncpy(char	*dst, const char	*src, size_t	len);
char		*ft_strnstr(const char	*haystack, const char	*needle, size_t	len);
char		*ft_strrchr(const char	*s, int	c);
char		*ft_strstr(const	char *haystack, const char	*needle);
int			ft_strequ(char	const *s1, char const	*s2);
int			ft_strnequ(char const	*s1, char const	*s2, size_t	n);
char		*ft_strtrim(char const	*s);
int			ft_isspace(char	c);
void		ft_strclr(char	*s);
void		ft_strdel(char	**as);
char		*ft_strsub(char const	*s, unsigned int	start, size_t	len);
void		ft_striter(char	*s, void	(*f)(char *s));
void		ft_striteri(char	*s, void(*f)(unsigned int, char *));
void		*ft_memalloc(size_t	size);
void		*ft_memchr(const void	*s, int	c, size_t	n);
int			ft_memcmp(const void	*s1, const void	*s2, size_t	n);
void		ft_memdel(void	**ap);
void		*ft_memmove(void	*dst, const void	*src, size_t	len);
char		*ft_strmap(char const	*s, char (*f)(char));
char		*ft_strmapi(char const	*s, char (*f)(unsigned int, char));
char		**ft_strsplit(char const	*s, char	c);
void		*ft_cleanstr(char	**s, size_t	i);
#endif
