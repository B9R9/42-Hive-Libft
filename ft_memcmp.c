/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:07:24 by briffard          #+#    #+#             */
/*   Updated: 2021/11/24 11:18:55 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t	n)
{
	unsigned char *src1;
	unsigned char *src2;
	size_t	i;

	i = 0;
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while(n > 0 ) {
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
		n--;
	}
	return (0);
}
