/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 20:45:32 by gann              #+#    #+#             */
/*   Updated: 2020/06/12 21:01:13 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	printf("whiteSpace ");
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\f')
		return (1);
	return (0);
}

int		is_operator(char c)
{
	printf("operator ");
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int		is_number(char c)
{
	printf("number ");
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int result;
	int minus;

	minus = 1;
	while (is_whitespace(*str))
		str++;
	while (is_operator(*str))
	{
		if (*str == '-')
			minus = minus * (-1);
		str++;
	}
	result = 0;
	while (is_number(*str))
	{
		result = result * 10;
		result = result + (*str) - '0';
		str++;
	}
	return (result * minus);
}
