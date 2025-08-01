/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:38:56 by perattan          #+#    #+#             */
/*   Updated: 2025/07/10 17:23:15 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int a  = 71;
	int *ptr1 = &a;

	int b = 17;
	int *ptr2 = &b;
	
	ft_swap(ptr1, ptr2);
	printf("%d", a);
	printf("%d", b);
} */
