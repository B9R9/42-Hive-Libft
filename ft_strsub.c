/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:39:38 by briffard          #+#    #+#             */
/*   Updated: 2021/11/30 09:52:03 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const	*s, unsigned int start, size_t len)
{
	unsigned char	*d;
	char			*new;
	size_t			i;

	d = (unsigned char *)s;
	i = 0;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	else
	{
		while (i < len)
		{
			new[i] = d[start];
			i++;
			start++;
		}
		new[i] = '\0';
	}
	return (new);
}
