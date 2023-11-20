/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 06:42:07 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/13 15:51:23 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;

	if ((int)size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	dest_length = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && dest_length + 1 < size)
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dest[dest_length] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
/*
#include <stdio.h>
#include <bsd/string.h>
int main ()
{
	char test[] = "WORDead";
	char dest[12] = "HELLO ";
	printf("%d \n", ft_strlcat(dest, test, 12));
	printf("%s \n", dest);
}*/
