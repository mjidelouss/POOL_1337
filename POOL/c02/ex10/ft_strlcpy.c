/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:51:09 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/12 09:50:47 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ssrc;

	ssrc = 0;
	i = 0;
	while (src[ssrc] != '\0')
	{
		ssrc++;
	}
	if (i < size)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ssrc);
}
