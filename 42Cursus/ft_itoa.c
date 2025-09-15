/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:31:48 by perattan          #+#    #+#             */
/*   Updated: 2025/09/15 15:31:48 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isZero(char **res, long int  *nbr)
{
	if (*nbr == 0)
	{
		**res = '0';
		*nbr = -*nbr;
	}
}

static int	num_len(long n)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
	{
		cnt++;
		n = -n;
	}
	if (n == 0)
		cnt++;
	while (n != 0)
	{
		n = n / 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nbr;
	int		len;

	nbr = n;
	len = num_len(n);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
	{
		return (NULL);
	}
	isZero(&res, &nbr);
	res[len] = 0;
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[len - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		len--;
	}
	return (res);
}