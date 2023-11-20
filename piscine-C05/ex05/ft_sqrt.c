/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 01:37:52 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/15 02:33:39 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i) <= nb)
	{
		if (i == 46360)
			return (0);
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	printf("%i", ft_sqrt(2147483646));
}*/