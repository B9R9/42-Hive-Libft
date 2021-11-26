/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:17:23 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 11:40:54 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s)
{
	size_t	start;
	size_t	end;
	char	*cpy;
	size_t	i;

	i = 0;
	start = 0 ;
	if(!s)
		return(NULL);
	end = ft_strlen(s) - 1;
	while (ft_isspace(s[start]))
		start++;
	if (start == ft_strlen(s))
		return("\0");
	while (ft_isspace(s[end]))
		end--;
	end += 1;
	cpy =(char *)malloc(sizeof(char) * (end - start) + 1);
	if (!cpy)
		return (NULL);
	while (start < end)
		cpy[i++] = s[start++];
	cpy[i] = '\0';
	return(cpy);
}
