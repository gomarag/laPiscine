/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 21:01:08 by gann              #+#    #+#             */
/*   Updated: 2020/06/14 13:11:10 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long int index;
	long long int llnb;

	llnb = nb;
	if (llnb <= 1)
		return (0);
	index = 2;
	while (index * index <= llnb)
	{
		if (llnb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (nb > 0)
	{
		if (ft_is_prime(nb) == 1)
			break ;
		nb++;
	}
	return (nb);
}
