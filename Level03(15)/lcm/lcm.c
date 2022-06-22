/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:23:21 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/10 20:05:37 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int i;
    
    if (a == 0 || b == 0)
        return 0;
    if (a > b)
        i = a;
    else 
        i = b;
    while (i)
    {
        if (i % a == 0 && i % b == 0)
            break;
        i++;
    }
    return i;
}
int main()
{
    printf("%d", lcm(6, 8));
    return 0;
}

