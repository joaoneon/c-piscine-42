/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_rev_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:28:24 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/03/14 15:48:02 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
	printf("\n");
}

int	main(void)
{
	int	empty[0];
	int	test_even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	test_odd[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	ft_rev_int_tab(empty, 0);
	ft_rev_int_tab(test_even, 10);
	ft_rev_int_tab(test_odd, 11);
	print_array(empty, 0);
	print_array(test_even, 10);
	print_array(test_odd, 11);
}