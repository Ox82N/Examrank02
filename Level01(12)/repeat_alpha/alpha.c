/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:51:32 by obenjair          #+#    #+#             */
/*   Updated: 2022/05/24 15:56:05 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int letter;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            letter = 0;
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                letter = argv[1][i] - 96;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                letter = argv[1][i] - 64;
            else
                letter = 1;
            while (letter--)
            {
                write(1, &argv[1][i], 1);
            }
        i++;
        
        }
    }
    write(1, "\n", 1);
    return 0;
}