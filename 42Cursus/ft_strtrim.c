/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:52:43 by perattan          #+#    #+#             */
/*   Updated: 2025/09/15 14:52:43 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int        i;
    int        j;
    char    *trim;
    int        k;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    j = ft_strlen(s1);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (j > i && ft_strchr(set, s1[j - 1]))
        j--;
    if (i >= j)
        return (ft_strdup(""));
    trim = (char *) malloc (j - i + 1);
    if (!trim)
        return (NULL);
    k = 0;
    while (i < j)
    {
        trim[k++] = s1[i++];
    }
    trim[k] = '\0';
    return (trim);
}

//int main()
//{
//    char *str1 = "xxxxx Hello world xxxxxxf";
//    char *str2 = "x";
//    printf ("%s",ft_strtrim(str1,str2));
//     return (0);
//}