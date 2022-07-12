/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:42:30 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/09 19:07:02 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	moins;

	i = 0;
	moins = 0;
	nb = 0;
	while (str[i] && str[i] <= 32)
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if(str[i] == '-')
			moins++;
		i++;
	}
	while (str[i] && (str[i] >= '0' || str[i] <= '9'))
	{
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	if (moins % 2 == 0)
		return nb;
	return -nb;
}