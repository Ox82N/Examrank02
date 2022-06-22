/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:20:33 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/13 16:29:23 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    if(argc == 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
            i++;
        while(argv[1][i])
        {
            if(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n')
                ft_putchar(argv[1][i]);
            else
            {
                while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
                    i++;
                if(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n' && argv[1][i] != '\0')
                {
                    ft_putchar(' ');
                    ft_putchar(argv[1][i]);
                }
            }
            if(argv[1][i])
                i++;
        }
    }
   write(1, "\n", 1);
    return 0;
}
