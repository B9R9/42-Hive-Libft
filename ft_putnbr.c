/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:44:26 by briffard          #+#    #+#             */
/*   Updated: 2021/11/17 16:02:40 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr(int	n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2");
		ft_putnbr(147483648);
	}
	else if(n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		if(n > 9)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}