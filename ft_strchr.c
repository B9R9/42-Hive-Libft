/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:52:20 by briffard          #+#    #+#             */
/*   Updated: 2021/11/23 10:23:31 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	unsigned int i;

	i = 0;
	while(s[i])
	{
		if(s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if(s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
