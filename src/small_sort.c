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

void    sort2(t_list **stack)
{
	if ((*stack)->data > (*stack)->next->data)
		sa(stack);
}

void    sort3(t_list **stack)
{
    if (((*stack)->data < (*stack)->next->data) && ((*stack)->next->data > \
    (*stack)->next->next->data) && ((*stack)->data > (*stack)->next->next->data))
        ra(stack);
    if (((*stack)->data < (*stack)->next->data) && ((*stack)->next->data > \
    (*stack)->next->next->data) && ((*stack)->data < (*stack)->next->next->data))
    {
        ra(stack);
        sa(a);
    }
    if (((*stack)->data > (*stack)->next->data) && ((*stack)->next->data < \
    (*stack)->next->next->data) && ((*stack)->data < (*stack)->next->next->data))
        sa(stack);
    if (((*stack)->data > (*stack)->next->data) && ((*stack)->next->data < \
    (*stack)->next->next->data) && ((*stack)->data > (*stack)->next->next->data))
        ra(stack);
    if (((*stack)->data > (*stack)->next->data) && ((*stack)->next->data > \
    (*stack)->next->next->data) && ((*stack)->data > (*stack)->next->next->data))
    {
        sa(stack);
        ra(stack);
    }
    return ;
}
/*
void    sort4(t_list **stack)
{
    exit;
}

void    sort5(t_list **stack)
{
    exit;
}
*/