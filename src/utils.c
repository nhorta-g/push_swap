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

/*Delets first node and makes the stack starting in second node*/
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

/*Delets last node*/
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

/*Finds minimum and maximum value of the index and stores it*/
void	get_max_min(t_list **a, long long *max, long long *min)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->index > *max)
			*max = tmp->index;
		if (tmp->index < *min)
			*min = tmp->index;
		tmp = tmp->next;
	}
}

/*Frees a stack's memory*/
static void	free_stack(t_list **stack)
{
	t_list	*tmp;

	if (stack)
	{
		if (*stack)
		{
			while (*stack)
			{
				tmp = (*stack);
				(*stack) = (*stack)->next;
				free(tmp);
			}
		}
	}
}

/*Exit the program after freeing the stacks and error
message in stderror if trigger is 1*/
void	exit_prog(t_list **a, t_list **b, int trigger)
{
	if (trigger == 1)
		ft_putendl_fd("Error\n", 2);
	free_stack(a);
	free_stack(b);
	exit(trigger);
}
