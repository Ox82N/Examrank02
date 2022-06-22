/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:13:38 by obenjair          #+#    #+#             */
/*   Updated: 2022/05/24 16:12:57 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] < 'z')
                argv[1][i] = argv[1][i] + 1;
            else if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
                argv[1][i] = argv[1][i] + 1;
            else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
                argv[1][i] = argv[1][i] - 25;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}