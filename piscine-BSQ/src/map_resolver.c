/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_resolver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:51:53 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/21 21:27:41 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"


char **resolve_map(char **map, t_rules rules)
{
	int line;
	int column;

	line = 0;
	while (line < rules.lines)
	{
		column = 0;
		while(column < ft_strlen(map[1]))
		{
			if (map[line][column] != rules.obstacle)

				map[line][column] = rules.full;
			column++;
		}
		line++;
	}

	return (map);
}