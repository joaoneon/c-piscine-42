/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:12:59 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/03/23 12:57:51 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
    
	while (src[i] != '\0')
	{
		i++;
	}
    return(i);
}

char	*ft_strdup(char *src)
{
	int size;
    int i;
    int c;
    char * dest;
  
    i = ft_strlen(src);

	dest = (char*)malloc(i * sizeof(char));

	if (size < 0)
		return (NULL);

    c = 0;
    
    while(src[c] != '\0')
    {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '\0';
    return (dest);
}

int main(void){

    char src[] = "tst2";

    printf("%s", ft_strdup(src));
    return (0);
}