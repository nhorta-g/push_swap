/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:04:38 by nuno              #+#    #+#             */
/*   Updated: 2022/12/17 16:27:30 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	if (tmp == NULL)
		write(1, "EMPTY STACK", 11);
	while (tmp)
	{
		printf("num: %lld ind: %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
}

void	print_all_stacks(t_list **stack_a, t_list **stack_b)
{
	write(1, "\n__________\n", 12);
	write(1, "    STACK A\n", 12);
	print_stack(stack_a);
	write(1, "\n   STACK B\n", 12);
	print_stack(stack_b);
	write(1, "\n__________\n\n", 13);
}
