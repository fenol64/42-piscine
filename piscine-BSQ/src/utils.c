/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 04:26:51 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/20 07:23:15 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	len;
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*rev_str(char *str)
{
	int i;
	int j;
	char temp;
	

	i = ft_strlen(str) - 1;
	j = 0;
	while (j < i)
	{
      	temp = str[i];
        str[i] = str[j];
        str[j] = temp;
		i--;
		j++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int number;
	int count;

	count = 0;
	number = 0;
	while (str[count] >= '0' && str[count] <= '9')
		number = number * 10 + (str[count++] - '0');
	return (number);
}
