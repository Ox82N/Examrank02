/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:51:05 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/06 21:44:37 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	wdmatch(char *str, char *second)
{
	int i = 0;
	while (str[i] != '\0')
	{
		while (*second != str[i] && *second != '\0')
			++second;
		if (*second == '\0')
			return;
		++i;
		++second;
	}
	write(1, str, i);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}
