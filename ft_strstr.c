/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 08:52:52 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 08:55:23 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char	*ft_strstr(const char	*haystack, const char *needle)
{
	int		i;
	int		j;
	char	*p;

	p = (char *) haystack;
	i = 0;
	if (needle[0] == '\0' || !needle)
		return (p);
	while (p[i] != '\0')
	{
		j = 0;
		while (p[i + j] == needle[j] && p[i + j] != '\0')
		{	
			if (needle[j + 1] == '\0')
				return ((char *)&p[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
