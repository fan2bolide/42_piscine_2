/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:11:47 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/24 18:04:11 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_destroy_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].value != NULL)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
	free(dict);
}

void	ft_destroy_blocks(char **blocks, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (blocks[i] != NULL)
			free(blocks[i]);
		i++;
	}
	free(blocks);
}
