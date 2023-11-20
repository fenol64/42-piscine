/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 00:47:41 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/09 21:40:28 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	is_numeric(char str)
{
	if ((str >= 47) && (str <= 57))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_numeric(str[i]) != 1)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
        char teste[] = "2783462837462873A86";

        printf("%i", ft_str_is_numeric(teste));
        return (1);
}*/
