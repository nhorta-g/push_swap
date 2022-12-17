/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:02:20 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/12/15 19:02:20 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	reverse_rotate(t_list **s)
{
	t_list	*tmp;

	if (s && *s && ft_lstsize(*s) > 1)
	{
		tmp = (*s);
		while (tmp->next)
			tmp = tmp->next;
		ft_lstadd_front(s, ft_lstnew_int_index((*s)->value, (*s)->index));
		del_last_node(s);
	}
	return ;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 3);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 3);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 3);
}
