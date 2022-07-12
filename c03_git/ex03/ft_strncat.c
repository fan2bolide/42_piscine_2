/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:10:24 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 21:40:31 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	while (dest[i])
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
