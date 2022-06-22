`/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:40:58 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/11 20:46:32 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	sort_int_tab(int *tab, int size)
{
	int				temp;
	unsigned int 	i;
	unsigned int 	j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
int		main(void)
{
	int tab[] = { 5, -4, 3, -2, 1, 0 };
    int size = 5;
    unsigned int i = 0;

	sort_int_tab(tab, size);

	while (i < size)
	{
		printf("%d, ", tab[i]);
		++i;
	}
	printf("\n");
}

