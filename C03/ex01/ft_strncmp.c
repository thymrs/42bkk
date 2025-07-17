/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:17:47 by perattan          #+#    #+#             */
/*   Updated: 2025/07/17 16:17:47 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int j;

	i = 0;
	j = (int) n;

	while (i < j && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
}

//int	main(void)
//{
//	char s1[] = "Hello naja eiei";
//	char s2[] = "Hi";
//	printf("%d", ft_strncmp(s1, s2, 5));
//}