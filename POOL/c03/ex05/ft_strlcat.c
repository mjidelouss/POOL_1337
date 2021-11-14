/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:55:29 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/18 09:47:36 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	size_dest;
	unsigned int	i;
	unsigned int	sum;

	size_src = 0;
	size_dest = 0;
	i = 0;
	sum = 0;
	while (src[size_src] != '\0')
		size_src++;
	while (dest[size_dest] != '\0')
		size_dest++;
	if (size <= size_dest)
		sum = size_src + size;
	else
		sum = size_src + size_dest;
	while ((src[i] != '\0') && (size_dest + 1 < size))
	{
		dest[size_dest] = src[i];
		i++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (sum);
}
