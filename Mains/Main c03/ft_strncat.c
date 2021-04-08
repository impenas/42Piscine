/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:25:16 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/18 15:01:54 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int count;
	int index;

	count = 0;
	index = 0;
	while(dest[count] !='\0')
		count++;
	while(src[index] !='\0' && index < nb)
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
	char a[7] = "dfg*gf";
	char b[] = "abc";
	
	printf("%s\n", ft_strncat(a,b,4));

	char c[7] = "dfg*gf";
	char d[] = "abc";
	
	printf("%s", strncat(c,d,4));
}
