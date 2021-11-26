/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:04:11 by briffard          #+#    #+#             */
/*   Updated: 2021/11/18 15:11:03 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	 ft_atoi(const char *str)
{
	int neg;
	int i;
	int result;

	result = 0;
	i = 0;
	neg = 1;
	while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - '0';
		}
		else 
			break;
		i++;
	}
	return(result * neg);
}
