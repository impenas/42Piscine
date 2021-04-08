/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:03:51 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/13 11:33:09 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;

	c = *a % *b;
	*a = *a / *b;
	*b = c;
}

int	main(void)
{
	int a = 6;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("o resultado e %d e o resto e  %d \n", a, b);
}		
