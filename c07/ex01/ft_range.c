/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:47:03 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/03/23 13:17:00 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int size;
    int *arr;
    int i;

    if(min >= max)
        return (NULL);    

    size = (max - min);

    arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL)
        return (NULL);
    i = 0;

    while(i < (size))
    {
        arr[i] = min;
        i++;
        min++;
    }
    return(arr);        
}


int main(void)
{
    int i;
    int* arr;
    
    i = 0;
    arr = ft_range(3, 10);
    while( i < (10 - 3))
    {
        printf("%i\n", arr[i]);
        i++;
    }
    return (0);   
}