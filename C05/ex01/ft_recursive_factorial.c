/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:17:36 by perattan          #+#    #+#             */
/*   Updated: 2025/07/23 13:17:36 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
	{
		return nb * ft_recursive_factorial(nb - 1);
	}
	else
	{
		return (1);
	}
}
//int	main(void)
//{
//	printf("%d", ft_recursive_factorial(5));
//}