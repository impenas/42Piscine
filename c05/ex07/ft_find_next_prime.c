/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:57:48 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/21 14:44:19 by ipenas           ###   ########.fr       */
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
	if (nb <= 3)
		return (1);
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
