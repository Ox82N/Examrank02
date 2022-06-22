/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:47:00 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/02 22:59:52 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hidenp(char *search, char *string)
{
	while (*search != '\0')
	{
		while (*search != *string && *string != '\0')
			++string;
		if (*string == '\0')
		{
			write(1, "0", 1);
			return;
		}
		++string;
		++search;
	}
	write(1, "1", 1);
}
int		main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
