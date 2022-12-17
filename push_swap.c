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

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac == 1)
		exit(0);
	stack.a = NULL;
	stack.b = NULL;
	parse_args(&stack.a, av);
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
