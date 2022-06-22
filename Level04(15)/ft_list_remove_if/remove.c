/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:08:34 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/11 19:30:00 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current
	t_list *last;
	t_list *next;

	current = *begin_list;
	last = ((void *)0);
	while(current)
	{
		next = current->next;
		if(cmp(current->data, data_ref) == 0)
		{
			if(last)
				last->next = current->next;
			else
				*begin_list = current->next;
			free(current);
			current = ((void *)0);
		}
		last = current;
		current = next;
	}
}