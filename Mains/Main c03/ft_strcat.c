/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:17:51 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/18 13:29:57 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int count;
	int index;

	count = 0;
	index = 0;
	while(dest[count] !='\0')
		count++;
	while(src[index] !='\0')
	{
		dest[count] = src[index];
		index++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main()
{
	char src[] = "ola";
	char dest[] = "mundo";

	printf(" %s \n", ft_strcat(dest, src));	
}
