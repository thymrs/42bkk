/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:42:48 by perattan          #+#    #+#             */
/*   Updated: 2025/07/30 16:50:12 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
