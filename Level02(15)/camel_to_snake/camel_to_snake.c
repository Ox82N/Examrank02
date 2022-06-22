/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:13:02 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/15 18:16:48 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*Write a program that takes a single string in the format lowerCamelCase and
converts it to a string in snake_case format.
The string lowerCamelCase is the string where each word starts with
capital letter, except for the first.
The string snake_case is the string where each word is written in the bottom
case and delimited by underscore "_".
Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat-e
hello_world$
$>./camel_to_snake | cat-e
$*/







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
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
             {
                 write(1, "_", 1);
                 argv[1][i] = argv[1][i] + 32;
             }
        write(1, &argv[1][i], 1);
        i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}