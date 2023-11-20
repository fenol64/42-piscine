/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:57:19 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/17 18:58:41 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int	ft_check_double(t_dict *struct_dict)
{
	int	i;
	int	j;

	i = 0;
	while (struct_dict[i].nbr)
	{
		j = i + 1;
		while (struct_dict[j].nbr)
		{
			if (ft_strcmp(struct_dict[i].nbr, struct_dict[j].nbr) == 0)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
