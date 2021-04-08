/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:43:19 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/18 19:17:21 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int count;

	count = ft_len(dest);
	i = 0;
	if (size < count)
	{
		while (src[i])
			i++;
		return (size + i);
	}
	while (size > 0 && count < size - 1 && src[i])
		dest[count++] = src[i++];
	dest[count] = '\0';
	while (src[i++])
		count++;
	return (count);
}