/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 23:15:20 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/16 23:20:22 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strupcase(char *str)
{
	char c;

   	c = 0;
   	while (str[c] != '\0')
   	{
	   	if (str[c] >= 'A' && str[c] <= 'Z')
	   	{
		   	str[c] += 32;
	   	}
	  	c++;
   	}
   	return (str);
}

int	main()
{
	char str[] = "INES";

	printf("%s \n", ft_strupcase(str));
}
