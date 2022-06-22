/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:28:42 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/15 18:32:47 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Write a program that takes a single snake_case string and converts it to a lowerCamelCase string.
The string snake_case is a string in which each word is written in lower case and separated by an underscore "_".
The string lowerCamelCase is a string in which every word starts with a capital letter, except for the first.
Example:
$>./camel_to_snake "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./camel_to_snake "hello_world" | cat-e
helloWorld$
$>./camel_to_snake | cat-e
$
*/


int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] == '_')
            {
                i++;
                argv[1][i] = argv[1][i] - 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}