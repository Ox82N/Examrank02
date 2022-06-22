/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:35:44 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/08 20:50:43 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>

int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void    swap(char a, char b)
{
    char swp;

    swp = a;
    a = b;
    b = swp;
}
char    *ft_strrev(char *str)
{
    int     i;
    int     len;

    i = 0;
    while(str[len+1])
        len++;
    while (len >= 0)
    {
        swap(str[i], str[len]);
        i++;
        len--;
    }
    return(str);
}
int main(void)
{
    printf("%s", ft_strrev("210cba"));
    return 0;
}