/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:48:09 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/18 13:11:29 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((*s1 != '\0' && *s2 != '\0') && ++i < n && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}

int	main()
{
	unsigned int n;
	char s1[] = "FZddd";
	char s2[] = "FZZddd";

	printf("%d \n", ft_strncmp(s1, s2, 3));
	printf("%d \n", strncmp(s1, s2, 3));
}
