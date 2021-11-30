/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:07:52 by briffard          #+#    #+#             */
/*   Updated: 2021/11/29 12:28:16 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	*s;

	if (!src && !dest)
		return (NULL);
	s = (unsigned char *) src;
	p = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	dest = (unsigned char *)p;
	return (dest);
}
