/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:05:07 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/10/29 13:55:00 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_stack **head_stack)
{
	t_stack	tail;
	t_stack	tmp;

	tmp = *head_stack;
	*head_stack = *head_stack->next;
	while (*head_stack && *head_stack->next)
		tail = *head_stack->next;
	tmp->next = NULL;
	tail->next = tmp;
}
