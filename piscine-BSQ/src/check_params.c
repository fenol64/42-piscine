/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 05:38:26 by fnascime          #+#    #+#             */
/*   Updated: 2023/09/20 09:21:32 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char *ft_trim(char *params)
{
    char *dest;
    int spaces;
    int i;
    int j;

    spaces = 0;
    i = 0;
    while (params[i] != '\0')
    {
        if (params[i] == ' ')
            spaces++;
        i++;
    }
    dest = (char *) malloc(sizeof(char) * (ft_strlen(params) - spaces));
    i = 0;
    j = 0;
    while (params[i])
    {
        if (params[i] != ' ')
        {
            dest[j] = params[i];
            j++;
        }
        i++;
    }
    return (dest);
}

t_rules get_rules(char *params)
{
    int params_length;
    int count;
    char *lines;
    char *lines_tmp;
    t_rules rules;
    int count2;

    count2 = 0;
    count = 1;
    params = ft_trim(params);
    params_length = ft_strlen(params);
    rules.error = 0;
    if (params_length < 4)
    {
        rules.error = 1;
        return (rules);
    }
    rules.full = params[params_length - count++];
    rules.obstacle = params[params_length - count++];
    rules.empty = params[params_length - count++];
    lines = (char *) malloc(params_length - count);
    lines_tmp = lines;
    while ((params_length - count) >= 0)
    {
        lines[count2++] = params[params_length - count++];
    }
    lines = &lines[0];
    rules.lines = atoi(rev_str(lines));
    free(lines_tmp);
    free(params);
    return (rules);
}
