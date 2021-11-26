/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:14:08 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 12:41:42 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memccpy(void	* dest, const void	* src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;
	
	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	
	if (s == 0 && d == 0)
		return (0);
	while (i < n)
	{
		
		d[i] = s[i];
		if (d[i] == (unsigned char) c)
			return (dest + (i + 1));
		i++;
	}
	return (0);
}
