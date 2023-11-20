/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:59:32 by pdrago            #+#    #+#             */
/*   Updated: 2023/09/20 15:16:31 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# define MAXBUFFER 200
typedef struct s_rules
{
	int error;
	char empty;
	char full;
	char obstacle;
	int lines;
} t_rules;

struct s_keypair
{
	int x;
	int	y;
};

// files_functions.c
int	ft_get_file_size(char * path);
char	*put_file_in_str(char *path_dict);
char	**ft_init_map(char *path_dict);
char	**ft_init_map(char *path_dict);


//ft_split.c
char	**ft_split(char *str, char *charset); 
int		ft_belong_charset(char c, char *charset);
int		ft_size(char *str, char *charset);
int		ft_word_count(char *str, char *charset);
void	ft_strncpy(char *str, char *dest, int n);

// map_validations.c
int	ft_strlen(char *str);
char **resolve_map(char **map, t_rules rules);
void print_map(char **map);
int	verify_line (char *line, t_rules rules);
// check_params.c
t_rules get_rules(char *params);
t_rules validate_map(char **map);
// messages.c
int	error(void);
int	map_error(void);

// utils.c
void	ft_putstr(char *str);
int	dict_error(void);
int	ft_strlen(char *str);
int	ft_atoi(char *str);
char	*rev_str(char *str);

#endif
