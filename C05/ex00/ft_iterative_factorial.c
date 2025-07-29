/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:12:09 by perattan          #+#    #+#             */
/*   Updated: 2025/07/23 13:12:09 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int fac;

	i = 1;
	fac = 1;
	while (i <= nb)
	{
		fac *= i;
		i++;
	}
	return (fac);
}
//int main(void)
//{
//	printf("%d", ft_iterative_factorial(2));
//}