/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:14:13 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/22 16:46:37 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	str_capitalizer(char *str)
{
    int i;

    i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		{
			write(1, str[i], 1);
			i++;
		}

		if (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
			write(1, str[i], 1);
			i++;
		}

		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + ('a' - 'A');
			write(1, str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		int i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			++i;
		}
	}

	return (0);
}