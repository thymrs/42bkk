/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:35:41 by perattan          #+#    #+#             */
/*   Updated: 2025/07/23 15:35:41 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	num = 0;
	while (num <= nb)
	{
		if (num * num == nb)
		{
			return (num);
		}
		else
			return (0);
		num++;
	}
}
int	main(void)
{
	printf("%d", ft_sqrt(6));
}