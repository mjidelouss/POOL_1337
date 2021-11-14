/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:50:20 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/21 09:14:50 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		fact = 1;
	}
	else
	{
		fact = nb * ft_recursive_factorial(nb - 1);
	}
	return (fact);
}
