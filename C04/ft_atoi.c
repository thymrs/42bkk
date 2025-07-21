/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 06:51:29 by perattan          #+#    #+#             */
/*   Updated: 2025/07/21 06:51:29 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//int	ft_atoi(char *str)
//{
//	int	i, count, num;

//	i = 0;
//	num = 0;
//	count = 1;
//	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
//		i++;
//	while (str[i] == '-' || str[i] == '+')
//	{
//		if (str[i] == '-')
//			count = count * -1;
//		i++;
//	}
//	while (str[i] >= '0' && str[i] <= '9')
//	{
//		num = num * 10 + (str[i] - '0');
//		i++;
//	}
//	return (num * count);
//}

int	ft_atoi(char *str)
{
	int	count, num;

	count = 1;
	num = 0;
	while (*str == ' ' || *str >= '\t' && *str <= '\r')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			count *= -1;
		}
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		++str;
	}
	return (num * count);
}
int	main(void)
{
	char	str[] = " ----+--+1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}