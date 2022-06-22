/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:07:37 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/10 20:36:03 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i] != '\0')
            i++;
        i--;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i--;
        while(argv[1][i] != ' ' && argv[1][i] != '\t' && i >= 0)
            i--;
        i++;
        while(argv[1][i] != ' ' && argv[1][i] != '\0' && argv[1][i] != '\t')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}