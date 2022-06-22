/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:18:44 by obenjair          #+#    #+#             */
/*   Updated: 2022/05/20 18:21:32 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int max;

    max = 0;
    if (tab)
    {
        i = 0;
        max = tab[0];
        while (i < len)
        {
            if(tab[i] > max)
                max = tab[i];
        i++;
        }
    }
    return max;
}
