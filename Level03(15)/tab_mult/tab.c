/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:29:09 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/06 16:36:51 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int n)
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

int	ft_atoi(const char *str)
{
    int i;
    int ishara;
    int res;

    i = 0;
    ishara = 1;
    res = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            ishara *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        if(res > 2147483647 && ishara == 1)
            return (-1);
        if(res > 2147483647 && ishara == -1)
            return (0);
        i++;
    }
    return ((int)(res * ishara));
}

void	ft_tabmult(int nbr)
{
	int		i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putchar('x');
		ft_putnbr(nbr);
		
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');

		ft_putnbr(i * nbr);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_tabmult(ft_atoi(argv[1]));
	else
		ft_putchar('\n');
	return (0);
}
