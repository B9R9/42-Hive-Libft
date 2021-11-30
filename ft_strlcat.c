/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 08:26:13 by briffard          #+#    #+#             */
/*   Updated: 2021/11/29 12:53:22 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;

	i = 0;
	dlen = ft_strlen(dst);
	j = dlen;
	if (dstsize < (size_t)ft_strlen(dst))
		return ((size_t)ft_strlen(src) + dstsize);
	while ((dstsize > j + 1) && src[i])
		dst[j++] = src[i++];
	dst[j] = '\0';
	return ((size_t)ft_strlen(src) + dlen);
}
