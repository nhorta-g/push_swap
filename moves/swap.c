/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:48:34 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/21 18:33:27 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list **stack)
{
	t_list	*tmp;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	swap_a(t_list **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	swap_b(t_list **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	swap_both(t_list **a, t_list **b)
{
	swap_a(a);
	swap_b(b);
	write(1, "sa\n", 3);
}

/*
void	swap_a(t_list **a, int signal)
{
	t_list	*tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = *a;
	*a = tmp;
	if (signal != 1)
		write(1, "sa\n", 3);
}

void	swap_b(t_list **b, int signal)
{
	t_list	*tmp;

	if (ft_lstsize(*b) < 2)
		return ;
	tmp = (*b)->next;
	(*b)->next = tmp->next;
	tmp->next = *b;
	*b = tmp;
	if (signal != 1)
		write(1, "sb\n", 3);
}

void	swap_both(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (ft_lstsize(*a) < 2 || ft_lstsize(*b) < 2)
		return ;
	swap_a(stack_a, 1);
	swap_b(stack_b, 1);
	write(1, "ss\n", 3);
}
*/
