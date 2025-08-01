/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:12:56 by perattan          #+#    #+#             */
/*   Updated: 2025/08/01 18:13:01 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y])
		y++;
	return (y);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	z;

	z = 0;
	while (s2[z])
	{
		s1[z] = s2[z];
		z++;
	}
	return (s1);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			x;

	x = 0;
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == 0)
		return (0);
	while (x < ac)
	{
		str[x].size = ft_strlen(av[x]);
		str[x].str = malloc(sizeof(char) * (str[x].size + 1));
		str[x].copy = malloc(sizeof(char) * (str[x].size + 1));
		ft_strcpy (str[x].str, av[x]);
		ft_strcpy (str[x].copy, av[x]);
		x++;
	}
	str[x].str = 0;
	return (str);
}
