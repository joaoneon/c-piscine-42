/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:11:40 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/03/22 14:11:50 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	i;

	x = argc - 1;
	if (argc < 2)
	{
		return (0);
	}
	while (x > 0)
	{
		i = 0;
		while (argv[x][i] != '\0')
		{
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x--;
	}
}
