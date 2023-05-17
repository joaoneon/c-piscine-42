/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:31:20 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/03/23 14:19:47 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
    {
        *range = NULL;
		return (0);
    }
	size = max - min;
	range = malloc(size * sizeof(int));
	if (range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[i] = &min;
        printf("%i\n", *range[i]);
        i++;
		min++;
	}
	return (size);
}

int	main(void)
{
	int *range;
    range = NULL;
	printf("%i", ft_ultimate_range(&range, 10, 15));
}