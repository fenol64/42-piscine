/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:39:08 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/15 05:04:30 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (nb);
}
/*
#include <stdio.h>

int main ()
{
	printf("%i \n", ft_recursive_factorial(-1));
	printf("%i \n", ft_recursive_factorial(0));
	printf("%i \n", ft_recursive_factorial(1));
	printf("%i \n", ft_recursive_factorial(5));
}*/
