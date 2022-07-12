/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:46:26 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/12 14:59:57 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power == 0)
		return (1);
	while (power > 0)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}

int main()
{
	printf("%d\n", ft_iterative_power(5, 9));
}