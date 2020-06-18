/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <gann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 20:26:23 by gann              #+#    #+#             */
/*   Updated: 2020/06/06 17:34:10 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		flag_big(char *str, int index)
{
	int i;

	if (index == 0)
		return (1);
	i = index - 1;
	if (str[i] >= '0' && str[i] <= '9')
		return (0);
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (0);
	if (str[i] >= 'a' && str[i] <= 'z')
		return (0);
	return (1);
}

void	to_upper(char *str, int index)
{
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] = str[index] - 32;
}

void	to_lower(char *str, int index)
{
	if (str[index] >= 'A' && str[index] <= 'Z')
		str[index] = str[index] + 32;
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (flag_big(str, index))
			to_upper(str, index);
		else
			to_lower(str, index);
		index++;
	}
	return (str);
}
