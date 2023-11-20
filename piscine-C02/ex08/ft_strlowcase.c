/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:07:48 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/09 22:06:17 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_uppercase(char c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
        char teste[] = "TestE";

        printf("%s", ft_strlowcase(teste));
        return (1);
}*/
