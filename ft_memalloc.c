/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:27:24 by briffard          #+#    #+#             */
/*   Updated: 2021/11/29 16:37:29 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memalloc(size_t	size)
{
	unsigned char	*arr;
	unsigned int	i;

	i = 0;
	arr = (unsigned char *)malloc(size);
	if (arr == NULL)
		return (NULL);
	else
	{
		while (i <= size)
		{
			arr[i] = '\0';
			i++;
		}
	}
	return (arr);
}
