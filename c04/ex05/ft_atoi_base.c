/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:35:09 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/09 23:06:47 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_verif_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i + 1])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				ft_putchar('a');
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			ft_putchar('a');
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_get_index_of(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return i;
		i++;
	}
	return -1;
}

int	ft_power(int nb, int power)
{
	while (power > 0)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	moins;

	if (ft_verif_base(base))
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
}

//pause
