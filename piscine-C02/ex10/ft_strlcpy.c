/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:00:35 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/09 23:12:33 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_length;

	i = 0;
	while (src[i] != '\0' || i < size)
	{
		dest[i] = src[i];
		i++;
	}
	str_length = i;
	while (i < size)
	{
		src[i] = '\0';
	}
	return (str_length);
}
/*
#include <stdio.h>
int main ()
{
	char teste1[50] = "TESTE DE COPIA";
	char teste2[30];

	ft_strlcpy(teste2, teste1, sizeof(teste2));
	printf("%s", teste2);
	return 1;
}*/
