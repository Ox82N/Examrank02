/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:25:15 by obenjair          #+#    #+#             */
/*   Updated: 2022/05/22 15:26:20 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
    int size;

    size = 0;
    while (begin_list != '\0')
    {
        begin_list = begin_list->next;
        size++;
    }
    return size;
}