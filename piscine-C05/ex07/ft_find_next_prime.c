/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:36:15 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/15 03:27:08 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i < (n / i))
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
/*#include <stdio.h>
int main ()
{
	int i = 0;

	while (i <= 20)
	{
		printf("para o número %i o próximo numero primo é: %i \n",
			i, ft_find_next_prime(i));
		i++;
	}

	return (0);
}*/
