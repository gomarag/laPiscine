/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <gann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 23:00:58 by gann              #+#    #+#             */
/*   Updated: 2020/06/08 21:21:00 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_non_printable(char c)
{
	unsigned char		dec;
	const unsigned char	hex[] = "0123456789abcdef";
	unsigned char		temp;

	temp = (unsigned char)c;
	write(1, "\\", 1);
	dec = hex[temp / 16];
	write(1, &dec, 1);
	dec = hex[temp % 16];
	write(1, &dec, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			print_non_printable(str[i]);
		i++;
	}
}
