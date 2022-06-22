/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 03:54:09 by obenjair          #+#    #+#             */
/*   Updated: 2022/05/28 16:07:38 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int i)
{
    int c;
    if (i >= 10)
        ft_putnbr(i / 10);
    c = (i % 10) + '0';
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
    int i;
    
    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fiww", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnbr(i);
    i++;
    write(1, "\n", 1);
    }
}
