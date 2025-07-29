/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoynuai <tnoynuai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:23:56 by tnoynuai          #+#    #+#             */
/*   Updated: 2025/07/28 16:04:09 by tnoynuai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	next_prime(int nb)
{
	int	next;

	next = nb + 1;
	while (!(is_prime(next)))
		next++;
	return (next);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
			return (next_prime(nb));
		i++;
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(8));
}*/
