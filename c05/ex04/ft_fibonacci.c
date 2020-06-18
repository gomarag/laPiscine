/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 16:32:54 by gann              #+#    #+#             */
/*   Updated: 2020/06/13 23:17:38 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int result;

	result = 0;
	if (index < 0)
		result = -1;
	else if (index == 0)
		result = 0;
	else if (index < 2)
		result = 1;
	else
		result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}
