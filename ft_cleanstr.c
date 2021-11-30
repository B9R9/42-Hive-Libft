/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleanstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:49:49 by briffard          #+#    #+#             */
/*   Updated: 2021/11/29 16:50:50 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_cleanstr(char	**s, size_t	i )
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free (s[j]);
		j++;
	}
	free (s);
	return (NULL);
}
