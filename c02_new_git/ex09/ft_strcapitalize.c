/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:03:55 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 10:29:51 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_aplhanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	ft_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (ft_is_lowercase(str[0]))
		str[0] -= ('a' - 'A');
	while (str[i + 1])
	{
		if (!ft_char_is_aplhanumeric(str[i]) && ft_is_lowercase(str[i + 1]))
		{
			str[i + 1] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}
