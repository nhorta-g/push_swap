/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:13:18 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/22 18:06:26 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

/*Returns 1 if stack is sorted in ascending order*/
int	check_order(t_list *stack)
{
	if (stack)
	{
		if (stack->next)
		{
			while (stack->next)
			{
				if ((stack->value) > (stack->next->value))
					return (0);
				stack = stack->next;
			}
		}
	}
	return (1);
}

static void	index_stack(t_list **a)
{
	t_list	*tmp;
	int		min;
	int		i;

	i = 0;
	while (++i <= ft_lstsize(*a))
	{
		tmp = *a;
		min = INT_MAX;
		while (tmp)
		{
			if (min > tmp->value && tmp->index == 0)
				min = tmp->value;
			tmp = tmp->next;
		}
		tmp = *a;
		while (tmp && tmp->value != min)
			tmp = tmp->next;
		tmp->index = i;
	}
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac == 1)
		exit(0);
	stack.a = NULL;
	stack.b = NULL;
	parse_args(&stack.a, av);
	index_stack(&stack.a);
	if (check_order(stack.a) == 0)
	{
		if (ft_lstsize(stack.a) == 2)
			sort2(&stack.a);
		else if (ft_lstsize(stack.a) == 3)
			sort3(&stack.a);
		else if (ft_lstsize(stack.a) <= 5)
			sort5(&stack.a, &stack.b);
		if (ft_lstsize(stack.a) >= 6)
			sort_big(&stack.a, &stack.b);
	}
	exit_prog(&stack.a, &stack.b, 0);
}
