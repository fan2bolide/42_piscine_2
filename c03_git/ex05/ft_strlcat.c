/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:40:19 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 21:37:52 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (j < size - 1)
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
	return (i);
}

int main(void)
{
	char str1[] = "blablablabla\0blablablabla";
	char *str2 = "salutjesu\0";

	printf("%s, %d", str1, ft_strlcat(str1, str2, 25));
}
