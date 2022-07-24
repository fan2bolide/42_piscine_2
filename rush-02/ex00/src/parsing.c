/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:14:14 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/24 20:56:58 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dict	*parse(char *dict)
{
	int		dict_count;
	int		f_dict_couter;
	t_dict	*formated_dict;

	formated_dict = malloc(sizeof(t_dict) * (ft_get_nbrlines(dict) + 1));
	if (formated_dict == NULL)
		return (NULL);
	dict_count = 0;
	f_dict_couter = 0;
	while (dict[dict_count] && f_dict_couter < ft_get_nbrlines(dict))
	{
		formated_dict[f_dict_couter].key = ft_get_key(dict, &dict_count);
		formated_dict[f_dict_couter].value = ft_get_value(dict, &dict_count);
		f_dict_couter++;
	}
	formated_dict[f_dict_couter].key = NULL;
	formated_dict[f_dict_couter].value = NULL;
	return (formated_dict);
}

char	*ft_get_key(char *dict, int *i)
{
	int		size;
	int		count;
	char	*key;

	size = 1;
	count = 0;
	key = malloc(sizeof(char) * size);
	if (key == NULL)
		return (NULL);
	while (dict[*i] && !ft_digits(dict[*i]))
		*i = *i + 1;
	while (dict[*i] && ft_digits(dict[*i]))
	{
		key[count] = 0;
		key = ft_realloc(key, ++size);
		if (key == NULL)
			return (NULL);
		key[count] = dict[*i];
		count++;
		*i = *i + 1;
	}
	key[count] = 0;
	return (key);
}

char	*ft_get_value(char *dict, int *i)
{
	int		size;
	int		count;
	char	*key;

	size = 1;
	count = 0;
	key = malloc(sizeof(char) * size);
	if (key == NULL)
		return (NULL);
	while (dict[*i] && !ft_alpha(dict[*i]))
		*i = *i + 1;
	while (dict[*i] && dict[*i] != '\n')
	{
		key[count] = 0;
		key = ft_realloc(key, ++size);
		if (key == NULL)
			return (NULL);
		key[count] = dict[*i];
		count++;
		*i = *i + 1;
	}
	key[count] = 0;
	return (key);
}

int	ft_get_nbrlines(char *dict)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dict[i])
	{
		if (dict[i] == '\n')
			count++;
		i++;
	}
	return (count);
}
