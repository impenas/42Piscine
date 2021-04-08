/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:17:56 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/19 16:59:48 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int index;
	int sinal;
	int numero;

	index = 0;
	sinal = 1;
	numero = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))	
		index++;
	while (str[index] == 43 || str[index] == 45)
	{
		if (str[index] == 45)
			sinal = sinal * -1;
		index++;
	}
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			numero *= 10;
			numero += (str[index++] - 48);
		}
		else
			return (numero * sinal);
	}
	return (numero * sinal);
}

int	main()
{
	printf("%d \n", ft_atoi("   ---+--+1234ab567"));
}
