/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:07:01 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/17 19:07:04 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int	ft_line_valid(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
	}
	else
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == ':')
		i++;
	else
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (ft_is_printable(str[i]))
		i++;
	return (1);
}

int	ft_line_dict(char *path_dict)
{
	int	nb;

	nb = ft_word_count(ft_put_dict_on_str(path_dict), "\n");
	if (!nb)
		return (0);
	return (nb);
}
