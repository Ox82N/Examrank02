/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:32:06 by obenjair          #+#    #+#             */
/*   Updated: 2022/05/20 17:35:20 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}
char    *ft_strdup(char *src)
{
    char *ptr;
    int i;

    ptr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
    if (ptr == NULL)
        return NULL;
    while (src[i])
    {
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}