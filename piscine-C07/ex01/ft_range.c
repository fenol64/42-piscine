/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:04:56 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/19 23:41:46 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ret;

	if (min >= max)
		return (0);
	ret = (int *) malloc(sizeof(int) * (max - min));
	if (!ret)
		return (NULL);
	i = 0;
	while (max > min)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
/*
#include <stdio.h>
int main ()
{
	int *teste = ft_range(-50, 50);

	int	i = 0;
	int	j = -50;
	while (j < 50)
	{
		printf("%d\n", teste[i]);
		i++;
		j++;
	}
	return (0);
}*/
