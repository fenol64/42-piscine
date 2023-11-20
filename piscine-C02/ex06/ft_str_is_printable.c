/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:51:51 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/09 21:53:39 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_printable(char s)
{
	if (s >= 32 && s <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
        char teste[] = "a";

        printf("%i", ft_str_is_printable(teste));
        return (1);
}*/
