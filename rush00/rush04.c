/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlee <eunlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 14:15:01 by eunlee            #+#    #+#             */
/*   Updated: 2020/05/31 19:32:57 by eunlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(const char c);

void			print_ceiling(int a)
{
	int i;

	i = 0;
	while (i < a)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == a - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void			print_floor(int a)
{
	int	i;

	i = 0;
	while (i < a)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i == a - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void			print_other(int a)
{
	int i;

	i = 0;
	while (i < a)
	{
		if (i == 0 || i == a - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void			rush(int a, int b)
{
	int i;

	i = 0;
	if (a <= 0 || b <= 0)
		return ;
	while (i < b)
	{
		if (i == 0)
			print_ceiling(a);
		else if (i == b - 1)
			print_floor(a);
		else
			print_other(a);
		ft_putchar('\n');
		i++;
	}
}
