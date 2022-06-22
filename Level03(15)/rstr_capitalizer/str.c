/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:20:39 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/15 15:46:39 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
    int i;
    char *str;
    
    i = 0;
    if(argc > 1)
    {
        while(str[i] != '\0')
        {
            if(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
                else if(str[i] >= 'A' && str[i] <= 'Z')
                    str[i] *= 1;
                write(1, &str[i], 1);
            }
            else
                write(1, &str[i], 1);
        i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}