/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:19:15 by perattan          #+#    #+#             */
/*   Updated: 2025/07/17 16:19:15 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = (int) nb;
	while (dest[i])
	{
		i++;
	}
	while (j < k && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
int	main(void)
{
	char str1[] = "how was your day?";
	char str2[] = "hello my baby";
	char *test = ft_strncat(str2, str1, 5);
	printf("%s", test);
}