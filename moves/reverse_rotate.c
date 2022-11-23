/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:36:16 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/21 18:45:26 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	reverse(t_list **stack)
{
	t_list	*tmp;

	if (stack && *stack && ft_lstsize(stack) > 1)
	{
		tmp = (*stack);
		while (tmp->next)
			tmp = tmp->next;
		ft_lstadd_front(stack, ft_lstnew((*tmp)->value))
		del_one(stack);
	}
	return ;
}

void	reverse_a(t_list **a)
{
	reverse(a);
	write(1, "ra\n", 3);
}

void	reverse_b(t_list **b)
{
	reverse(b);
	write(1, "rb\n", 3);
}

void	reverse_both(t_list **a, t_list **b)
{
	reverse(a);
	reverse(b);
	write(1, "rr\n", 3);
}
