/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 23:56:49 by perattan          #+#    #+#             */
/*   Updated: 2025/09/15 23:56:49 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		idx;
	char	*res;

	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	idx = 0;
	while (*(s + idx))
	{
		*(res + idx) = f(idx, *(s + idx));
		idx++;
	}
	res[idx] = 0;
	return (res);
}
#include <stdio.h>

char tester(unsigned int i, char c) {
    return c + i;
}

int main() {
    char *str = "abcd";
    char *result = ft_strmapi(str, tester);

    if (result) {
        printf("Result: %s\n", result);
        free(result);
    }
    return 0;
}
