/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:07:37 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/17 19:07:41 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

// Criamos uma string com n * 3 caracteres com apenas 0s
char	*ft_str_with_zero(char *str)
{
	int		size;
	char	*dest;
	int		i;

	if (ft_strlen(str) % 3 == 0)
		size = ft_strlen(str);
	else if (ft_strlen(str) % 3 == 2)
		size = ft_strlen(str) + 1;
	else
		size = ft_strlen(str) + 2;
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		dest[i] = '0';
		i++;
	}
	dest[i] = '\0';
	ft_fill_dest(dest, str, size);
	return (dest);
}

// Preenchemos o array criado começando do final
void	ft_fill_dest(char *dest, char *str, int size)
{
	int	i;
	int	j;

	i = size;
	j = ft_strlen(str);
	while (j >= 0)
	{
		dest[i] = str[j];
		i--;
		j--;
	}
}

// Imprime o sufixo
int	ft_print_suffix(char *dest, t_dict *tab)
{
	char	*key;

	key = ft_create_key_suffix(dest);
	if (!key)
		return (0);
	write (1, " ", 1);
	if (ft_print_str(tab, key))
	{
		free (key);
		return (1);
	}
	else
		return (0);
}

// cria um array para colocar o sufixo
char	*ft_create_key_suffix(char *dest)
{
	int		i;
	int		size;
	char	*key;

	size = ft_strlen(dest) - 2;
	key = malloc(sizeof(char) * (size + 1));
	if (!key)
		return (0);
	key[0] = '1';
	i = 1;
	while (i < size)
	{
		key[i] = '0';
		i++;
	}
	key[i] = '\0';
	return (key);
}

char	*ft_str_zero_trimmed(char *str)
{
	int		i;
	int		c;
	char	*str_no_zero;

	i = 0;
	c = 0;
	while (str[i] && str[i] == '0')
		i++;
	while (str[i + c])
		c++;
	str_no_zero = malloc(sizeof(char) * (c + 1));
	if (!str_no_zero)
		return (0);
	c = 0;
	while (str[i])
	{
		str_no_zero[c] = str[i];
		i++;
		c++;
	}
	str_no_zero[c] = '\0';
	return (str_no_zero);
}
