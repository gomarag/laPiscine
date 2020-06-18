/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 13:33:11 by gann              #+#    #+#             */
/*   Updated: 2020/06/18 19:03:27 by gann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_char(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_strlen(char *str, char *charset)
{
	int		ret;

	ret = 0;
	while (*str != '\0')
	{
		if (check_char(*str, charset) == 1)
			break ;
		ret++;
		str++;
	}
	return (ret);
}

int		word_count(char *str, char *charset)
{
	int		len;
	int		ret;

	ret = 0;
	while (*str != '\0')
	{
		len = ft_strlen(str, charset);
		if (len == 0)
			str++;
		else
		{
			ret++;
			str += len;
		}
	}
	return (ret);
}

void	ft_strncpy(char *dest, char *src, int n)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		if (index >= n)
			break ;
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		count;
	int		index;

	count = word_count(str, charset);
	ret = (char **)malloc(sizeof(char *) * (count + 1));
	if (ret == NULL)
		return (NULL);
	ret[count] = NULL;
	index = 0;
	while (*str != '\0')
	{
		count = ft_strlen(str, charset);
		if (count == 0)
			str++;
		else
		{
			ret[index] = (char *)malloc(sizeof(char) * (count + 1));
			if (ret[index] == NULL)
				return (NULL);
			ft_strncpy(ret[index++], str, count);
			str += count;
		}
	}
	return (ret);
}
