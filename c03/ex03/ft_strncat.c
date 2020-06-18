/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <gann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 16:49:06 by gann              #+#    #+#             */
/*   Updated: 2020/06/15 09:31:43 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	index;

	len = 0;
	index = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[index] != '\0' && index < nb)
	{
		dest[index + len] = src[index];
		index++;
	}
	dest[len + index] = '\0';
	return (dest);
}
