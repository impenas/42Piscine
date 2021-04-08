/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:08:36 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/12 23:10:13 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b; 
}

int	main(void)
{
	int a = 3;
	int b = 6;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	 printf("%d / %d = %d, remainder %d \n", a, b, div, mod);
}
	
