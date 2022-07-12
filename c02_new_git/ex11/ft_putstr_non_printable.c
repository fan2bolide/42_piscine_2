/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:49:58 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 15:56:36 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_to_hex_print(unsigned char c)
{
	char	*hextable;

	hextable = "0123456789abcdef";
	ft_putchar(hextable[c / 16]);
	ft_putchar(hextable[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{
			ft_putchar('\\');
			ft_convert_to_hex_print(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
