/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <gann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 07:36:56 by gann              #+#    #+#             */
/*   Updated: 2020/06/15 09:25:35 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int len;
	int index;

	len = 0;
	index = 0;
	while (dest[len] != '\0')
		len++;
	while (src[index] != '\0')
	{
		dest[len + index] = src[index];
		index++;
	}
	dest[len + index] = '\0';
	return (dest);
}
