/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:44:39 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/07 14:45:44 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int nb)
{
	if (nb < 10)
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		while (b <= 99)
		{
			if (a < b)
			{
				ft_print(a);
				ft_putchar(' ');
				ft_print(b);
				if (a != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			b++;
		}
		b = 0;
		a++;
	}
}
