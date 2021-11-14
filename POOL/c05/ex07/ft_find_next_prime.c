/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:27:57 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/21 15:38:42 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <unistd.h>
int	ft_is_prime(int nb)
{
	int			i;
	long int	n;
	long int	t;

	i = 2;
	t = 1;
	n = nb;
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	while (t * t <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		t++;
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
}
