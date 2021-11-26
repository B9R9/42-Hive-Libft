/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:10:31 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 12:29:27 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	if (s < d)
	{
		while ( i < len)
			{
				d[len - 1] = s[len - 1];
				len--;
			}
	}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
		return (dst);
}
