/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:49:07 by pdrago            #+#    #+#             */
/*   Updated: 2023/09/21 21:26:38 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int	i;
	char	*current_map;
	char	**map;
	t_rules	rules;

	if (argc < 2)
		return (map_error());
	i = 1;
	while (i < argc)
	{
		current_map = argv[i];
		map = ft_init_map(current_map);
		rules = validate_map(map);
		if (!rules.error)
		{
			print_map(resolve_map(map, rules));
		}
		else
			return (map_error());
		i++;
	}
	return (0);
}
