/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:20:11 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/18 21:28:39 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	
	index = 0;
	while (src[index] !='\0' && index < n)
	{
		dest[index] = src[index];
		index ++;
	}
	while ( index < n)
	{
		dest[index] = '\0';
		index ++;
	}
	return (dest);
}

int	main()
{
	unsigned int n;
	char src[] = "Alexandre";
	char dest[] = "inesa";

	printf(" %s \n", ft_strncpy(dest, src, 2));
}
