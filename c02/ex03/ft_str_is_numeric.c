/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 20:38:39 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/20 12:08:41 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 48 && str[index] <= 57)
		{
			count++;
		}
		index++;
	}
	if (count == index || str[0] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
