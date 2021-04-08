/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:57:48 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/21 12:31:03 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int a;

	if (nb <= 1)
	{
		return (0);
	}
	a = 2;
	while (a < nb)
	{	
		if (nb % a == 0)
		{
			return (0);
		}
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
		}
		nb++;
	}
	return (2147483647);
}

int	main()
{
	printf("%d \n", ft_find_next_prime(2147483647));
}
