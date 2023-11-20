/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:04:21 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/06 15:32:05 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	current_number;
	int	is_half;

	is_half = 0;
	if (size % 2 == 0)
	{
		is_half = 1;
	}
	i = 0;
	while (i <= (size / 2) - is_half)
	{
		current_number = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = current_number;
		i++;
	}
}
