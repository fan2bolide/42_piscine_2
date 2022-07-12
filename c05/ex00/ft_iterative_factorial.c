/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:57:25 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/12 14:47:48 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (nb == 0)
		return (1);
	while (++i <= nb)
		res *= i;
	return (res);
}
