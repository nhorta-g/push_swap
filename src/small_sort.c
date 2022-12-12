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

void	sort2(t_list **stk)
{
	if ((*stk)->value > (*stk)->next->value)
		sa(stk);
}

void	sort3(t_list **stk)
{
	if (((*stk)->value < (*stk)->next->value) && ((*stk)->next->value > \
	(*stk)->next->next->value) && ((*stk)->value > (*stk)->next->next->value))
		ra(stk);
	if (((*stk)->value < (*stk)->next->value) && ((*stk)->next->value > \
	(*stk)->next->next->value) && ((*stk)->value < (*stk)->next->next->value))
	{
		ra(stk);
		sa(stk);
	}
	if (((*stk)->value > (*stk)->next->value) && ((*stk)->next->value < \
	(*stk)->next->next->value) && ((*stk)->value < (*stk)->next->next->value))
		sa(stk);
	if (((*stk)->value > (*stk)->next->value) && ((*stk)->next->value < \
	(*stk)->next->next->value) && ((*stk)->value > (*stk)->next->next->value))
		ra(stk);
	if (((*stk)->value > (*stk)->next->value) && ((*stk)->next->value > \
	(*stk)->next->next->value) && ((*stk)->value > (*stk)->next->next->value))
	{
		sa(stk);
		rra(stk);
	}
	return ;
}
/*
void	sort4(t_list **stk)
{
	exit;
}

void	sort5(t_list **stk)
{
	exit;
}
*/
