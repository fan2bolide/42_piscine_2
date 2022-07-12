/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:07:25 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/09 23:09:26 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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



int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;

	base_length = ft_strlen(base);
	if (ft_verif_base(base) || base_length < 2)
	{
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr < base_length)
	{
		ft_putchar(base[nbr]);
	}
	else
	{
		ft_putnbr_base(nbr / base_length, base);
		ft_putnbr_base(nbr % base_length, base);
	}
}

int main()
{
	char *base = "poneyvif";

	ft_putnbr_base(792356, base);
}
