/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:17:26 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/24 22:55:02 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_realloc(char *str, int size)
{
	char	*newstr;

	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * size);
	if (newstr == NULL)
		return (NULL);
	ft_strncpy(newstr, str, size);
	free(str);
	return (newstr);
}

char	*ft_file_to_str(int argc, char **argv)
{
	char	*str;
	int		fd;
	int		size;
	char	*path;

	size = 1;
	if (argc == 2)
		path = "./numbers.dict";
	else
		path = argv[1];
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot open file\n", 17);
		return (NULL);
	}
	return (ft_read_in_file(str, fd, size));
}

char	*ft_read_in_file(char *str, int fd, int size)
{
	int		i;
	char	buf;

	i = 0;
	while (read(fd, &buf, 1) == 1)
	{
		str[i] = 0;
		str = ft_realloc(str, ++size);
		if (str == NULL)
			return (NULL);
		str[i++] = buf;
	}
	str[i] = 0;
	close(fd);
	return (str);
}
