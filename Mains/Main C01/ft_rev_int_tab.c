/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 21:20:12 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/14 16:19:32 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int b;

	a = 0;
	while ( a < size)
	{
		size--;
		b = tab [a];
		tab [a] = tab [size];
		tab [size] = b;
		a++;
	}
}

int	main()
{
	int tab [6] = {1, 8, 3, 2, 9, 4};

	ft_rev_int_tab( &tab[0], 6);
	for (int i = 0; i < 6; i++)
	printf("%d", tab[i]);
	return(0);
}
