/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:49:37 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/12 22:54:08 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	str_length;

	str_length = 0;
	while (str[str_length] != '\0')
	{
		str_length++;
	}
	return (str_length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_length;
	int	i;

	dest_length = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main ()
{
	char test[50] = "hello";
	char test2[30] = " word";

	printf("%s", ft_strcat(test, test2));
	return (0);
}*/
