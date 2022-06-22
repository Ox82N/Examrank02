/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:09:24 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/19 17:23:24 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}
int main(void)
{
	print_bits(16);
	write(1, "\n", 1);
}