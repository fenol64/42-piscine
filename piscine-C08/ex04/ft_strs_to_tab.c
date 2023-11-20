/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:58:25 by fnascime          #+#    #+#             */
/*   Updated: 2023/10/10 16:25:02 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	create_item(char *str)
{
	t_stock_str	current_item;

	current_item.size = ft_strlen(str);
	current_item.str = str;
	current_item.copy = ft_strcpy(str);
	return (current_item);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					current_word;
	struct s_stock_str	*ret;

	ret = malloc(sizeof(t_stock_str) * (ac + 1));
	current_word = -1;
	while (++current_word < ac)
		ret[current_word] = create_item(av[current_word]);
	ret[current_word].size = 0;
	ret[current_word].str = 0;
	ret[current_word].copy = 0;
	return (ret);
}
/*
#include <stdio.h>
int main (int c, char **v)
{
	struct s_stock_str *teste = ft_strs_to_tab(c, v);
	int i = 0;
	
	while (i < (c + 1))
	{
		
		printf("%i\n", teste[i].size);
		printf("%s\n", teste[i].str);
		printf("%s\n", teste[i].copy);
		printf("-----------------------\n");
		i++;
	}
	
	return (1);
}*/
