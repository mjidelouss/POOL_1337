/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:29:23 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/19 09:28:09 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

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

int	check_if_unique(char *str)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_if_valid(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			a;
	int			b;
	int			size;
	long int	nb;

	nb = nbr;
	size = ft_strlen(base);
	i = 0;
	a = check_if_valid(base);
	b = check_if_unique(base);
	if (a && b)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= size)
			ft_putnbr_base(nb / size, base);
		ft_putchar(base[nb % size]);
	}
}
