/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:47:56 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 11:54:19 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	size_t	i;
	i = 1;
	while(*s1 && (*s1 == *s2) && *s2 && i < n)
	{
		i++;
		s1++;
		s2++;
	}
	return(*(unsigned char *)s1 - *(unsigned char *) s2);
}
