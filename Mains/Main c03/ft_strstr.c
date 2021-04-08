/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:05:15 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/18 17:33:15 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int count;
	int index;

	count = 0;
	if (*to_find  == 0)
		return (str);
	while (str[count] !='\0')
	{
		index = 0;
		while (to_find[index] == str[count + index])
		{
			if (to_find[index + 1] == '\0')
			{
		   		return (str + count);
			}
			index++;
		}	
		count++;
	}
	return(0);	
}

int	main()
{
	char str[] = "adoro o luna";
	char to_find[] = "o";

	printf("%s\n", ft_strstr(str, to_find));	
}
