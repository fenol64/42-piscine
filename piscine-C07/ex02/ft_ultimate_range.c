/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:06:26 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/19 21:22:22 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	len;

	if (min >= max)
		return (0);
	len = (max - min);
	array = malloc(sizeof(int) * len);
	i = 0;
	if (!array)
		return (-1);
	while (max > min)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (len);
}
/*
#include <stdio.h>
int main ()
{	
	int *number;
	int **nbr = &number;

	int teste = ft_ultimate_range(nbr, 1, 5);
	int i = 0;

	while (i < teste)
	{
		printf("%d", (*nbr)[i]);
		i++;
	}
	return (0);
}*/
