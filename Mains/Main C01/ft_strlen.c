/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:14:12 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/13 21:15:03 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int c;
	
	c = 0;

		while(*str != '\0')
		{
			str++;
			c++;
		}
		return(c);
}

int	main()
{
	char *str;
	char b;

	str = "qwertyuiol";
	b = ft_strlen(str);
	printf("Length of string str = %d \n", b);
}
