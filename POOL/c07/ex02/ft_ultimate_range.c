/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:26:28 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/25 11:20:22 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	m;
	int	*tab;

	i = 0;
	m = min;
	len = (max - min);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * len);
	if (tab == NULL)
		return (-1);
	while (m < max)
	{
		tab[i++] = m;
		m++;
	}
	*range = tab;
	return (max- min);
}
