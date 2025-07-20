/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:31:03 by perattan          #+#    #+#             */
/*   Updated: 2025/07/17 18:31:03 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i, j, k;

	i = 0;
	j = 0;

	k = ft_strlen(dest) + ft_strlen(src);
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (k);
}
//int	main(void)
//{
//	char str1[] = "hellh";
//	char str2[] = "hi";
//	unsigned int test = ft_strlcat(str2, str1, 5);
//	printf("%d", test);
//}