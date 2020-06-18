/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlee <eunlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 14:10:42 by eunlee            #+#    #+#             */
/*   Updated: 2020/05/31 19:33:41 by eunlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(const char c);
extern void	rush(int a, int b);

int			main(void)
{
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(-5, 4);
	ft_putchar('\n');
	rush(5, -4);
	ft_putchar('\n');
	return (0);
}
