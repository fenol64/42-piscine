/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:02:44 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/10 01:10:30 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_aplhanumeric(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= 47 && c <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_aplhanumeric(str[i])
			&& !is_aplhanumeric(str[i - 1])
			&& !is_number(str[i - 1]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main ()
{	
	char teste[70] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um\n";
	printf("%s", ft_strcapitalize(teste));
}*/
