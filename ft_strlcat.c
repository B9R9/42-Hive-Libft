/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 08:26:13 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 11:47:36 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;
	size_t lendst;

	i = 0;
	if(dstsize == 0)
		return(0);
	len = ft_strlen(dst);
	lendst = len;
	while(len < (dstsize - 1))
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	if (dstsize != 0 && dstsize >= lendst)
		dst[len] = '\0';
	if(dstsize < (size_t)ft_strlen(dst))
		return((size_t)ft_strlen(src) + dstsize);
	else
		return ((size_t)ft_strlen(src) + lendst);
}
