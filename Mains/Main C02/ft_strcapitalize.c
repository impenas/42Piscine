/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 23:25:35 by ipenas            #+#    #+#             */
/*   Updated: 2021/01/17 16:32:48 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int c;

   	c = 0;
   	while (str[c] != '\0')
   	{
	   	if (str[c] >= 'A' && str[c] <= 'Z')
	   	{
		   	str[c] += 32;
	   	}
	  	if (str[c] >= 'a' && str[c] <= 'z')
		{
			if (!(str[c-1] >= 'A' && str[c-1] <= 'Z'))
			if (!(str[c-1] >= '0' && str[c-1] <= '9'))	
			if (!(str[c-1] >= 'a' && str [c-1] <= 'z'))
			{
				str[c] -=32;
			}
		}
		c++;
	}
	return(str);
}

int	main()
{
	char str[] = "INES";

	printf("%s \n", ft_strcapitalize(str));
}
