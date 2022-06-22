/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:21:18 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/08 18:53:58 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int main(int argc, char **argv)
{
    int first;
    int second;
    char ishara;
    int res;
    
    if(argc == 4)
    {
        first = atoi(argv[1]);
        second = atoi(argv[3]);
        ishara = argv[2][0];
        if(ishara == '+')
            res = first + second;
        else if(ishara == '-')
            res = first - second;
        else if(ishara == '*')
            res = first * second;
        else if(ishara == '/')
            res = first / second;
        else if(ishara == '%')
            res = first % second;
        ft_putnbr(res);
    }
    write(1, "\n", 1);
    return 0;
}