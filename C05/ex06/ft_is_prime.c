/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:03:33 by perattan          #+#    #+#             */
/*   Updated: 2025/07/23 20:03:33 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	num;

	num = 2;
	while (num < nb)
	{
		if (nb % num == 0)
		{
			return (0);
		}
		num++;
	}
	return (1);
}
int	main(void)
{
	printf("%d", ft_is_prime(10));
}