/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 09:45:27 by gann              #+#    #+#             */
/*   Updated: 2020/06/13 23:11:30 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto;
	int	index;

	if (nb < 0)
		return (0);
	index = 1;
	facto = 1;
	while (index < nb + 1)
	{
		facto = facto * index;
		index++;
	}
	return (facto);
}
