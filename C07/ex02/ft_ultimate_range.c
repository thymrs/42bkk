/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:42:48 by perattan          #+#    #+#             */
/*   Updated: 2025/07/30 17:09:06 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **array, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*array = NULL;
		return (0);
	}
	*array = (int *)malloc(sizeof(int) * size);
	if (!*array)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*array)[i] = min;
		min++;
		i++;
	}
	return (size);
}
