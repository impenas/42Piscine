/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:25:16 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/18 22:09:45 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int count;
	unsigned int index;

	count = 0;
	index = 0;
	while (dest[count] != '\0')
		count++;
	while (src[index] != '\0' && index < nb)
	{
		dest[count] = src[index];
		index++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
