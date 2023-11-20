/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:33:35 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/09 22:01:22 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_lowercase(char c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
        char teste[] = "teste De UpperCase";

        printf("%s", ft_strupcase(teste));
        return 1;
}*/
