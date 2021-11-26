/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:58:30 by briffard          #+#    #+#             */
/*   Updated: 2021/11/26 11:03:58 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		intlenght(long	n)
{
	int i;

	i =  0;
	if(n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n =  n / 10;
		i++;
	}
	return (i);
}
/*
static char	*cpystr(char	*str, int	n, int	len)
{
	long	k;

	k = n;
	str[len] = '\0';
	len = len - 1;
	if(k < 0)
	{
		k = k * -1;;
		str[0] = '-';
	}
	while(k > 0)
	{
		str[len] = (k % 10) + '0';
		k = k / 10;
		len--;
	}
	return (str);
}*/

char	*ft_itoa(int	n)
{
	int		len;
	char	*freshstr;
	long	k;

	k = n;
	len = intlenght(k);

	freshstr = (char *)malloc(sizeof(char) *(len + 1));
	if(!freshstr)
		return NULL;
	//freshstr = cpystr(freshstr, n, len);
	freshstr[len] = '\0';
	len = len - 1;
	if(k < 0)
	{
		freshstr[0] = '-';
		k = k * -1;
	}
	while(k > 0)
	{
		freshstr[len] = (k % 10) + 48;
		k = k / 10;
		len--;
	}
	return(freshstr);
}
