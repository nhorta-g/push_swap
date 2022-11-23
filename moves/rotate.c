/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:05:07 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/22 18:07:05 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate(t_list **stack)
{
	if (stack && *stack && ft_lstsize(stack) > 1)
	{
		ft_lstadd_back(stack, ft_lstnew((*stack)->value	));
		del_one(stack);
	}
	return ;
}

void	rotate_a(t_list **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rotate_both(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
