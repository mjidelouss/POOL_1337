/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:41:29 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/24 19:36:44 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_weed(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	weed_size;

	i = 0;
	weed_size = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			weed_size++;
			j++;
		}
		i++;
	}
	return (weed_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*str;

	i = 0;
	total = ft_weed(size, strs, sep);
	str = malloc(sizeof(char) * total + 1);
	if (size == 0)
	{
		str = (char *)malloc(1);
		return (str);
	}
	str[0] = '\0';
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
		{
			str = ft_strcat(str, sep);
		}
		i++;
	}
	return (str);
}
