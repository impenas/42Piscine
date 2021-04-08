/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:01:53 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/20 13:31:32 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int number;

	number = 1;
	if(nb < 0)
		return (0);
	if (nb > 0)
	{	
		number = nb * ft_recursive_factorial(nb-1);
	}
	return (number);
}
 int	main()
{
	printf("%d \n", ft_recursive_factorial(7));
	return (0);
}
