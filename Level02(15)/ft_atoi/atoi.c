/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:22:03 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/04 23:42:01 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
    int i;
    int ishara;
    int res;

    i = 0;
    ishara = 1;
    res = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            ishara *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        if(res > 2147483647 && ishara == 1)
            return (-1);
        if(res > 2147483647 && ishara == -1)
            return (0);
        i++;
    }
    return ((int)(res * ishara));
}