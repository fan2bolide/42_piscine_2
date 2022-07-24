/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:29:02 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/24 22:39:55 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//changer le parsing pour prendre en compte les espaces

int	main(int argc, char **argv)
{
	char	*file;
	t_dict	*dict;
	int		i;

	i = 0;
	if (argc != 2 && argc != 3)
	{
		write(1, "Incorrect argument count\n", 25);
		return (0);
	}
	file = ft_file_to_str(argc, argv);
	if (file == NULL)
		return (0);
	dict = parse(file);
	if (dict == NULL)
		return (0);
	ft_print_value(argv[1], dict);
	ft_destroy_dict(dict);
	write(1, "\n", 1);
	return (0);
}
