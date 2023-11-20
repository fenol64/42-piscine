/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 04:07:57 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/15 04:13:34 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	str_length;

	str_length = 0;
	while (str[str_length] != '\0')
	{
		write(1, &str[str_length], 1);
		str_length++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_putstr(argv[0]);
	return (0);
}
