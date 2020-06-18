/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 10:43:00 by gann              #+#    #+#             */
/*   Updated: 2020/06/16 23:24:38 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = src[len];
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*result;

	index = 0;
	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == 0)
		return (0);
	while (index < ac)
	{
		result[index].size = ft_strlen(av[index]);
		result[index].str = av[index];
		result[index].copy = ft_strdup(av[index]);
		index++;
	}
	result[index].str = 0;
	return (result);
}
