/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 02:58:19 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/24 21:05:27 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_atoa(char *str)
{
	int		i;
	int		size;
	int		sign;
	char	*newstr;
	int		count;

	i = 0;
	sign = 1;
	count = 0;
	size = ft_strlen(str) + 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			sign *= -1;
	while (str[i + count] && ft_digits(str[i + count]))
		count++;
	newstr = malloc(sizeof(char) * (count + 1));
	count = 0;
	while (str[i] && ft_digits(str[i]))
		newstr[count++] = str[i++];
	newstr[count] = 0;
	return (newstr);
}
