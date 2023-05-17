#include <stdio.h>

int    ft_ultimate_range(int **range, int min, int max);

int    main(void)
{
    int    min;
    int    max;
    int    *range;

    min = 10;
    max = 15;
    range = NULL;
    printf("%i", ft_ultimate_range(&range, min, max));
}

#include <stdlib.h>

int    ft_ultimate_range(int **range, int min, int max)
{
    int    len;
    int    count;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    len = max - min;
    count = 0;
    range = malloc(len * sizeof(int));
    if (range == NULL)
        return (-1);
    while (min < max)
    {
        range[count] = &min;
        printf("%i\n", *range[count]);
        count++;
        min++;
    }
    return (len);
}