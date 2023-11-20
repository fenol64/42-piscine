/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:17:36 by pdrago            #+#    #+#             */
/*   Updated: 2023/09/20 11:35:03 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void print_map(char **map)
{
	int count;

	count = 1;
	while (map[count])
	{
		ft_putstr(map[count++]);
		ft_putstr("\n");
	}

}

int	verify_line (char *line, t_rules rules)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (!(line[i] == rules.full 
			|| line[i] == rules.empty
			|| line[i] == rules.obstacle))
			return (0);
		i++;
	}
	return (1);
}

int validate_lines(char **map, t_rules rules)
{
	int count;
	int first_line;
	int current_line;

	count = 1;
	first_line = ft_strlen(map[count]);
	if (rules.lines <= 1)
		return (0);
	if (map[count] && ft_strlen(map[count]) <= 0)
		return (0);
	while(count < rules.lines)
	{
		current_line = ft_strlen(map[count]);
		if (!verify_line(map[count], rules))
			return (0);
		count++;
	}
	return (1);
}

t_rules validate_map(char **map)
{

	t_rules rules;

	rules = get_rules(map[0]);
	if (rules.error)
		return (rules);
   if (!validate_lines(map, rules))
   {
		rules.error = 1;
		return (rules);
	}
   return rules; 
}