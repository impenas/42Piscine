/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 20:37:20 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/21 10:24:37 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int impar;
	int count;

	impar = 1;
	count = 0;
	while (nb > 0)
	{
		nb = nb - impar;
		impar = impar + 2;
		count++;
	}
	if (nb == 0)
		return (count);
	else
		return (0);
}
