Int/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:21:18 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/16 20:09:31 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int index;
	int count;

	index = 0;
	count = 0;
	if (str[index] != 0)
	{
		while (str[index] != '\0')
		{
			if (str[index] >= 65 && str[index] <= 90)
			{		
				count++;
			}
			else if (str[index] >= 97 && str[index] <= 122)
			{
				count++;
			}
			index++;
		}
		if (count == index)
		{	
			return(1);
		}
		if (count < index)	
		{
			return (0);
		}
		return (0);
	}
}

int	main()
{
	char str[] = "qwerydDhjsb";
	char index[] = "";

	printf ("%d \n" ,ft_str_is_alpha(str));
}
