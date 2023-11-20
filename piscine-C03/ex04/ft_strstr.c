/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:12:08 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/13 09:15:44 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					break ;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			j = 0;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%p \n", strstr("um teste de memo", ""));
	printf("%p \n", ft_strstr("um teste de memo", ""));
}*/
