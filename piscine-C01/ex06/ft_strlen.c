/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:41:02 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/05 19:28:04 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	str_length;

	str_length = 0;
	while (str[str_length] != '\0')
	{
		str_length++;
	}
	return (str_length);
}
