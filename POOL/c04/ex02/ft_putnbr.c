/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:16:23 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/19 10:18:02 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	i;

	i = nb;
	if (i < 0)
	{
		i = -i;
		ft_putchar('-');
	}
	if (i <= 9)
		ft_putchar(i + '0');
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}
