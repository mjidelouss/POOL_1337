/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:55:35 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/24 11:58:17 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	array = (int *) malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	if (min >= max)
		return (0);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
