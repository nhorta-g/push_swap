/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:58:29 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/22 13:46:40 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	del_first_node(t_list **stack)
{
	t_list	*temp;

	if (!stack || !*stack)
		return ;
	temp = (*stack);
	temp = temp->next;
	free (*stack);
	(*stack) = temp;
}

void	del_last_node(t_list **stack)
{
	t_list	*temp;
	t_list	*last_node;

	if (!stack || !*stack)
		return ;
	temp = (*stack);
	while (temp->next->next)
		temp = temp->next;
	last_node = temp->next;
	temp->next = NULL;
	free (last_node);
}

int	check_order(t_list *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

//function to free a stack's memory
void	free_stack(t_list **stack)
{
	t_list	*tmp;

	while (stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		(*stack) = tmp;
	}
}

void	exit_prog(t_list **a, t_list **b, int trigger)
{
	if (trigger != 0)
		ft_putendl_fd("Error\n", 2);
	free_stack(a);
	free_stack(b);
	exit(trigger);
}
