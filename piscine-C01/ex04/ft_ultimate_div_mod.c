/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:11:44 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/05 09:45:55 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod_result;
	int	div_result;

	mod_result = *a % *b;
	div_result = *a / *b;
	*a = div_result;
	*b = mod_result;
}
