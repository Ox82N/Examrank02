/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:18:12 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/03 20:09:21 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    char a;
    char b;

    i = 0;
    if(argc == 4 && !argv[2][1] && !argv[3][1])
    {
        a = argv[2][0];
        b = argv[3][0];
        while(argv[1][i])
        {
            if(argv[1][i] == a)
                argv[1][i] = b;
        write(1, &argv[1][i], 1);
        i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}