/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:55:50 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/24 22:59:38 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_get_value_from_dict(char *key, t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].value != NULL)
	{
		if (ft_strcmp(key, dict[i].key) == 0)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

void	ft_print_hundreds(char *key, t_dict *dict)
{
	char	*newkey;

	if (key[0] == '0')
		return ;
	newkey = malloc(sizeof(char) * 2);
	if (newkey == NULL)
		return ;
	newkey[0] = key[0];
	newkey[1] = 0;
	ft_putstr(ft_get_value_from_dict(newkey, dict));
	write(1, " ", 1);
	ft_putstr(ft_get_value_from_dict("100", dict));
	write(1, " ", 1);
	free(newkey);
}

void	ft_print_twenties(char *key, t_dict *dict)
{
	if (ft_atoi(&key[ft_strlen(key) - 2]) < 10)
	{
		ft_putstr(ft_get_value_from_dict(&key[ft_strlen(key) - 1], dict));
		return ;
	}
	if (ft_strlen(key) >= 2 && ft_atoi(&key[ft_strlen(key) - 2]) <= 20)
	{
		ft_putstr(ft_get_value_from_dict(&key[ft_strlen(key) - 2], dict));
		return ;
	}
}

void	ft_print_tens(char *key, t_dict *dict)
{
	char	*newkey;

	if (key[0] == '0')
		return ;
	newkey = malloc(sizeof(char) * 3);
	if (newkey == NULL)
		return ;
	newkey[0] = key[0];
	newkey[1] = '0';
	newkey[2] = 0;
	ft_putstr(ft_get_value_from_dict(newkey, dict));
	free(newkey);
	write(1, " ", 1);
	ft_putstr(ft_get_value_from_dict(&key[ft_strlen(key) - 1], dict));
}

void	ft_print_block(char *block, t_dict *dict, int i)
{
	if (block[0] != '0')
		ft_print_hundreds(block, dict);
	if (ft_atoi(&block[ft_strlen(block) - 2]) <= 20
		&& (block[1] != '0' || block[2] != '0'))
	{
		ft_print_twenties(block, dict);
		return ;
	}
	if (ft_atoi(&block[ft_strlen(block) - 2]) > 20
		&& (block[1] != '0' || block[2] != '0'))
		ft_print_tens(&block[ft_strlen(block) - 2], dict);
	if (i > 0)
	{
		write(1, " ", 1);
		ft_print_inter_blocks(i, dict);
	}
}
