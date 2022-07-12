/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:27:15 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/07 14:46:16 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a == 7)
		return ;
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 9 && b < 9 && c < 9)
	{
		c++;
		if (a < b && b < c)
			ft_print(a, b, c);
		if (a == 9)
			return ;
		if (c == 9)
		{
			c = 0;
			b++;
		}
		if (b == 9)
		{
			b = 0;
			a++;
		}
	}
}
