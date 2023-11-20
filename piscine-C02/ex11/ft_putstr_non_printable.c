/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:25:28 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/09 20:22:27 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_printable(char s)
{
	if (s >= 32 && s <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex_table;
	int		i;
	int		calc;	

	hex_table = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
		{
			write(1, "\\", 1);
			calc = hex_table[str[i] / 16];
			write(1, &calc, 1);
			calc = hex_table[str[i] % 16];
			write(1, &calc, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int main()
{
	char teste[] = "TESTE COM\t E COM \n";
	ft_putstr_non_printable(teste);
}*/
