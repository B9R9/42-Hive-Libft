/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:10:47 by briffard          #+#    #+#             */
/*   Updated: 2021/11/29 12:26:02 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	d;

	src = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*src == d)
			return (src);
		src++;
		i++;
	}
	return (0);
}
