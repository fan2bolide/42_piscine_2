/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:44:11 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 17:45:28 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		return (s1[i - 1] - s2[i - 1]);
	}
	return (s1[i] - s2[i]);
}
