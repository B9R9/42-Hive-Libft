/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 09:57:29 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 11:45:31 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char	*needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*p;

	p = (char *) haystack;
	i = 0;
	if (needle[0] == '\0' || !needle)
		return (p);
	while (p[i] != '\0')
	{
		j = 0;
		while (p[i + j] == needle[j] && p[i + j] != '\0' && len > (i + j))
		{	
			if (needle[j + 1] == '\0')
				return ((char *)&p[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
