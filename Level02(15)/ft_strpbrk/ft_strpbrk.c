/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:24:28 by obenjair          #+#    #+#             */
/*   Updated: 2022/05/31 23:31:09 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == c)
            return ((char *)s);
        s++;
    }
    return ((void *)0);
}
char	*ft_strpbrk(const char *s1, const char *s2)
{
    while(*s1)
    {
        if(ft_strchr(s2, *s1))
            return ((char *)s1);
        s1++;
    }
    return ((void *)0);
}
