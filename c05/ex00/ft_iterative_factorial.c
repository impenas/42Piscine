/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:49:45 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/20 10:54:04 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int a;
	int number;

	a = 1;
	number = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (a <= nb)
	{
		number = number * a;
		a++;
	}
	return (number);
}
