/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:51:53 by obenjair          #+#    #+#             */
/*   Updated: 2022/06/19 16:24:13 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_values(t_list *a, t_list *b)
{
	int swap = a->data;
	a->data = b->data;
	b->data = swap;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int sort = 1;
	t_list *cur = lst;

	while (sort == 1)
	{
		sort = 0;
		while (cur != 0 && cur->next != 0)
		{
			if (cmp(cur->data, cur->next->data) == 0)
			{
				swap_values(cur, cur->next);
				sort = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return (lst);
}
