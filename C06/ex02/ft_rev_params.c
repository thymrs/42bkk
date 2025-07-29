/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:09:44 by perattan          #+#    #+#             */
/*   Updated: 2025/07/28 21:10:03 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = argc - 1;
	while (a > 0)
	{
		i = 0;
		while (argv[a][i])
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		write(1, "\n", 1);
		a--;
	}
}
