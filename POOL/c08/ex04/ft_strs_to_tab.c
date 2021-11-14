/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:25:09 by aelousse          #+#    #+#             */
/*   Updated: 2021/08/26 10:27:15 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
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

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	i = 0;
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		while (i < ac)
		{
			str[i].size = ft_strlen(av[i]);
			str[i].str = av[i];
			str[i].copy = ft_strdup(av[i]);
			i++;
		}
		str[i].str = 0;
		return (str);
	}
}

/*int main()
{
	char *t[4]={"1337","42","test","show"};
	t_stock_str *p = ft_strs_to_tab(4,t);
	ft_show_tab(p);
	return (0);
}*/
