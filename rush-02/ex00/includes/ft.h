/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:54:54 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/24 22:42:18 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <strings.h>

typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;

int		ft_atoi(char *str);

void	ft_putstr(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		ft_strlen(char *str);

int		ft_isspace(char c);

void	ft_putstr(char *str);

void	ft_putchar(char c);

int		ft_digits(char nb);

int		ft_alpha(char c);

int		ft_strcmp(char *s1, char *s2);

char	*ft_file_to_str(int argc, char **argv);

char	*ft_realloc(char *str, int size);

t_dict	*parse(char *dict);

char	*ft_get_key(char *dict, int *i);

char	*ft_get_value(char *dict, int *i);

int		ft_get_nbrlines(char *dict);

char	*ft_read_in_file(char *str, int fd, int size);

void	ft_print_value(char *value, t_dict *dict);

char	*ft_atoa(char *str);

void	ft_destroy_dict(t_dict *dict);

void	ft_destroy_blocks(char **blocks, int size);

int		ft_create_complete_blocks(char **blocks, int size,
			char *key, int index_in_key);

void	ft_create_incomplete_block(char **block, int index_in_key,
			char *key, int i);

void	ft_print_block(char *block, t_dict *dict, int i);

void	ft_print_inter_blocks(int i, t_dict *dict);

char	*ft_get_value_from_dict(char *key, t_dict *dict);

#endif