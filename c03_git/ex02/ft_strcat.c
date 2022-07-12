/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:49:33 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 21:31:49 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
