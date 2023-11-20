/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:17:53 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/13 15:43:29 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main ()
{
	int teste_mp =   ft_strcmp("Teste", "teste");
	int test_function = strcmp("Teste", "teste");
	printf("%d \n%d", teste_mp, test_function);

	return (1);
}*/
