/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <gann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 21:32:39 by gann              #+#    #+#             */
/*   Updated: 2020/06/01 15:43:00 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nr)
{
	if (nr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nr / 10);
		ft_putchar(-nr % 10 + '0');
	}
	else if (nr >= 10)
	{
		ft_putnbr(nr / 10);
		ft_putchar(nr % 10 + '0');
	}
	else
	{
		ft_putchar(nr + '0');
	}
}
