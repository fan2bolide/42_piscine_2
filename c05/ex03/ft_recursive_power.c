/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:48:30 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/12 14:56:55 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		nb += nb;
		power -= 1;
		return (ft_recursive_power(nb, power));
	}
	return (nb);
}

int main()
{
	printf("%d\n", ft_recursive_power(5, 9));
}
