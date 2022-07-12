/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:29:40 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 19:37:12 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] >= 'a' && str[i] <= 'z'))
		i++;
	if (str[i])
		return (0);
	return (1);
}
