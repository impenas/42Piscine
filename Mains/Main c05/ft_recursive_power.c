/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:08:53 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/20 18:41:54 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
		res = (nb * ft_recursive_power(nb, power -1));
	}
	return (res);
}

int	main()
{
	printf("%d \n", ft_recursive_power(10, 0));
	return (0);
}
