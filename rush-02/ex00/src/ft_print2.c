/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:14:37 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/24 23:01:57 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_value(char *key, t_dict *dict)
{
	int		size;
	char	**blocks;
	int		i;
	int		index_in_key;

	key = ft_atoa(key);
	index_in_key = ft_strlen(key) - 1;
	size = ft_strlen(key) / 3;
	i = size;
	if (ft_strlen(key) % 3 != 0)
		size++;
	blocks = malloc(sizeof(char *) * size);
	if (blocks == NULL)
		return ;
	index_in_key = ft_create_complete_blocks(blocks, size, key, index_in_key);
	if (ft_strlen(key) % 3 != 0)
		ft_create_incomplete_block(blocks, index_in_key, key, i++);
	i--;
	while (i >= 0)
	{
		ft_print_block(blocks[i], dict, i);
		if (--i >= 0)
			write(1, " ", 1);
	}
	ft_destroy_blocks(blocks, size);
}

int	ft_create_complete_blocks(char **blocks, int size,
	char *key, int index_in_key)
{
	int	i;
	int	incomplete_block;

	incomplete_block = 0;
	if (ft_strlen(key) % 3 != 0)
		incomplete_block++;
	i = 0;
	while (i < size - incomplete_block)
	{
		blocks[i] = malloc(sizeof(char) * 4);
		blocks[i][3] = 0;
		blocks[i][2] = key[index_in_key--];
		blocks[i][1] = key[index_in_key--];
		blocks[i][0] = key[index_in_key--];
		i++;
	}
	return (index_in_key);
}

void	ft_create_incomplete_block(char **block, int index_in_key,
	char *key, int i)
{
	if (ft_strlen(key) % 3 == 1)
	{
		block[i] = malloc(sizeof(char) * 4);
		if (block[i] == NULL)
			return ;
		block[i][3] = 0;
		block[i][2] = key[index_in_key];
		block[i][1] = '0';
		block[i][0] = '0';
	}
	if (ft_strlen(key) % 3 == 2)
	{
		block[i] = malloc(sizeof(char) * 4);
		if (block[i] == NULL)
			return ;
		block[i][3] = 0;
		block[i][2] = key[index_in_key--];
		block[i][1] = key[index_in_key];
		block[i][0] = '0';
	}
}

void	ft_print_inter_blocks(int i, t_dict *dict)
{
	char	*str;
	int		size;
	int		j;

	size = (i * 3) + 1;
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return ;
	str[size] = 0;
	str[0] = '1';
	j = 1;
	while (j < size)
		str[j++] = '0';
	ft_putstr(ft_get_value_from_dict(str, dict));
	free(str);
}
