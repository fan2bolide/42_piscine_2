/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:21:14 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 10:29:34 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_char_is_alpha(str[i]))
		i++;
	if (str[i])
		return (0);
	return (1);
}
