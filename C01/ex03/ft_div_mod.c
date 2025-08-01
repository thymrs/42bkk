/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:04:22 by perattan          #+#    #+#             */
/*   Updated: 2025/07/10 17:24:28 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int a = 127;

	int b = 25;

	int div = 0;

	int mod = 0;

	int *pdiv = &div;

	int *pmod = &mod;

	ft_div_mod(a, b, pdiv, pmod);
	printf("\n%d", div);
	printf("\n%d", mod);
} */
