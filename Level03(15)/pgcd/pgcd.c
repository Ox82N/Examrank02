/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:31:03 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/10 17:50:57 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    ft_putchar((nbr % 10) + '0');
}
void	pgcd(int a, int b)
{
	int n = a;

	while (n > 0)
	{
		if (a % n == 0 && b % n == 0)
		{
			ft_putnbr(n);
			return;
		}
		--n;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
    write(1, "\n", 1);
	return (0);
}
