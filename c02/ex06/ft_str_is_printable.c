/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 22:10:10 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/19 11:10:15 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 126)
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
