/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:15:14 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/20 18:04:08 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

int	main()
{
	printf("%d \n", ft_iterative_power(5, 10));
	return (0);
}
