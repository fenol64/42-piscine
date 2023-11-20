/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:44:30 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/14 01:07:40 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	minus;

	while (*str > 0 && *str <= 32)
		str++;
	minus = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	result = 0;
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (minus % 2 == 1)
		result = result * -1;
	return (result);
}
/*
#include <limits.h>
#include <stdio.h>
int main ()
{
	//printf("%i\n", INT_MIN);
	printf("%i\n", ft_atoi("-2147483648"));
}*/
