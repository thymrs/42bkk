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

#include <stdio.h>
#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i < n)
        return (s1[i] - s2[i]);
    return (0);
}
// int	main(void)
// {
// 	char s1[] = "Hello";
// 	char s2[] = "Hellz";

// 	printf("%d", ft_strncmp(s1, s2, 5));
// }