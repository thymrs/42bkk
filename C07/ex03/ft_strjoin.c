/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:11:49 by perattan          #+#    #+#             */
/*   Updated: 2025/08/01 18:33:09 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_copy(char **strs, char *str, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while ((i < size - 1) && sep[j] != '\0')
		{
			str[k] = sep[j];
			j++;
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s1;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (size == 0)
	{
		s1 = malloc(1);
		s1[0] = '\0';
		return (s1);
	}
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	s1 = (char *)malloc((sizeof(char) * len) + 1);
	s1 = ft_copy(strs, s1, size, sep);
	return (s1);
}

//int	main()
//{
//	char	*str;
//	char *argv[5] = {"Hello", "my", "new", "world", ";D"};
//	str = ft_strjoin(5, argv, " ");
//	printf("%s\n", str);
//	return (0);
//}
