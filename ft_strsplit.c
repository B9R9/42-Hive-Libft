/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:04:27 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 13:39:36 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	compteurdemots(char const *s, char	c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

static	int	countletters(char const	*s, int	i, char	c)
{
	int	count;

	count = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_strsplit(char const	*s, char	c)
{
	int		j;
	char	**dest;
	int		i;
	int		z;

	j = 0;
	i = 0;
	if(!s)
		return(NULL);
	dest = (char **)malloc(sizeof(char *) * (compteurdemots(s, c) + 1));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		dest[j] = (char *)malloc(sizeof(char) * (countletters(s, i, c) + 1));
		if (!dest[j])
			return (ft_cleanstr(dest, j));
		z = 0;
		while (s[i] != c && s[i] != '\0')
			dest[j][z++] = s[i++];
		dest[j++][z] = '\0';
		//i++;
	}
	dest[j] = 0;
	return (dest);
}
