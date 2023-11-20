/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:39:41 by pdrago            #+#    #+#             */
/*   Updated: 2023/09/20 05:21:27 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"


int	ft_get_file_size(char *path)
{
	int ret;
	char buffer_map[MAXBUFFER];
	int fd;
	int count;

	count = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (error());
	while (1)
	{
		ret = read(fd, buffer_map, MAXBUFFER);
		if (ret > 0)
			count = count + ret;
		else
			break ;
	}
	fd = close(fd);
	return (count);
}

char	*put_file_in_str(char *path_dict)
{
	int		ret;
	char	*file_string;
	int		fd;

	file_string = malloc(sizeof(char) * (ft_get_file_size(path_dict) + 1));
	if (!file_string)
		return (0);
	fd = open(path_dict, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, file_string, (ft_get_file_size(path_dict) + 1));
	file_string[ret] = '\0';
	close(fd);
	return (file_string);
}

char	**ft_init_map(char *path_dict)
{
	char	*map;
	char	**tab_dict;

	map = put_file_in_str(path_dict);
	if (map == NULL)
		return (0);
	tab_dict = ft_split(map, "\n");
	if (!tab_dict)
		return (0);
	return (tab_dict);
}

