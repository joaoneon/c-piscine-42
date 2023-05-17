/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 04:39:06 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/03/21 04:45:02 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	result;

	i = count_spaces(str);
	signal = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += (str[i] - 48);
			i++;
		}
		else
			return (result * signal);
	}
	return (result * signal);
}
