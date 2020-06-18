/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <gann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 23:00:48 by gann              #+#    #+#             */
/*   Updated: 2020/06/11 19:20:16 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ret;
	unsigned int	i;

	i = 0u;
	ret = ft_strlen(src);
	if (size != 0)
	{
		while ((*src != '\0') && (i < size - 1))
		{
			dest[i] = *src;
			src++;
			i++;
		}
		dest[i] = '\0';
	}
	return (ret);
}
