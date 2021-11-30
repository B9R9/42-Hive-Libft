/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:00:49 by briffard          #+#    #+#             */
/*   Updated: 2021/11/29 13:18:22 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmap(char const	*s, char	(*f)(char))
{
	char			*map;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	map = ft_strdup(s);
	if (!map || !s || !f)
		return (NULL);
	while (map[i])
	{
		map[i] = (*f)(map[i]);
		i++;
	}
	return (map);
}
