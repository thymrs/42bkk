/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:13:16 by perattan          #+#    #+#             */
/*   Updated: 2025/08/01 18:13:18 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int y)
{
	int		x;
	char	num[10];

	x = 0;
	if (y == 0)
		write(1, "0", 1);
	while (y > 0)
	{
		num[x++] = y % 10 + '0';
		y = y / 10;
	}
	while (x > 0)
		write (1, &num[--x], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	x;

	x = 0;
	while (par[x].str || par[x].size)
	{
		if (par[x].size)
		{
			ft_putnbr(par[x].size);
			write(1, "\n", 1);
		}
		write(1, par[x].str, par[x].size);
		write(1, "\n", 1);
		write(1, par[x].copy, par[x].size);
		write(1, "\n", 1);
		x++;
	}
}
