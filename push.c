/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:41:43 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/21 17:05:47 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (b && *b)
	{
		lstadd_front(a, ft_lstnew(*b->value));
		del_one(b);
		write(1, "pa\n", 3);
	}
	return ;
}

void	push_b(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (a && *a)
	{
		lstadd_front(b, ft_lstnew(*a->value));
		del_one(a);
		write(1, "pb\n", 3);
	}
	return ;
}

