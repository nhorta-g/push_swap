/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:47:50 by marvin            #+#    #+#             */
/*   Updated: 2022/12/08 19:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort2(t_list **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort3(t_list **a)
{
	if (((*a)->value < (*a)->next->value) && ((*a)->next->value > \
	(*a)->next->next->value) && ((*a)->value > (*a)->next->next->value))
		ra(a);
	if (((*a)->value < (*a)->next->value) && ((*a)->next->value > \
	(*a)->next->next->value) && ((*a)->value < (*a)->next->next->value))
	{
		sa(a);
		ra(a);
	}
	if (((*a)->value > (*a)->next->value) && ((*a)->next->value < \
	(*a)->next->next->value) && ((*a)->value < (*a)->next->next->value))
		sa(a);
	if (((*a)->value > (*a)->next->value) && ((*a)->next->value < \
	(*a)->next->next->value) && ((*a)->value > (*a)->next->next->value))
		ra(a);
	if (((*a)->value > (*a)->next->value) && ((*a)->next->value > \
	(*a)->next->next->value) && ((*a)->value > (*a)->next->next->value))
	{
		sa(a);
		rra(a);
	}
	return ;
}

void	sort5(t_list **a, t_list **b)
{

}

void	find_min(t_lst **stack, int *min)
{
	t_lst	*temp;

	temp = (*stack);
	*min = (*stack)->number;
	while (temp->next)
	{
		temp = temp->next;
		if (temp->number <= *min)
			*min = temp->number;
	}
	return ;
}

void	find_max(t_lst **stack, int *max)
{
	t_lst	*temp;

	temp = (*stack);
	*max = (*stack)->number;
	while (temp->next)
	{
		temp = temp->next;
		if (temp->number >= *max)
			*max = temp->number;
	}
	return ;
}
