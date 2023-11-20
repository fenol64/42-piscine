/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:01:40 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/21 13:34:59 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_length(char **strs, char *sep)
{
	int	length;
	int	i;

	i = 0;
	length = 0;
	while (strs[i])
	{
		length += ft_strlen(strs[i]);
		if (strs[i + 1])
			length += ft_strlen(sep);
		i++;
	}
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_length;

	i = 0;
	dest_length = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*full_string;
	int		current_word;

	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	current_word = 0;
	full_string = (char *) malloc(sizeof(char) * get_length(strs, sep));
	while (strs[current_word] && current_word < size)
	{
		ft_strcat(full_string, strs[current_word]);
		if (strs[current_word + 1] && current_word < size - 1)
			ft_strcat(full_string, sep);
		current_word++;
	}
	return (full_string);
}

#include <stdio.h>
int main (int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc - 2, argv + 2, argv[1]));
}
