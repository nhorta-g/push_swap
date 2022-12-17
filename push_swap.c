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

static void	parse_numbers(t_list **stack, int ac, char **av)
{
	int	i;

	i = 1;
	ft_lstadd_front(stack, ft_lstnew_int_index(atoi(av[1]), 0));
	while (++i < ac)
		ft_lstadd_back(stack, ft_lstnew_int_index(atoi(av[i]), 0));
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac == 1)
		exit(0);
	stack.a = NULL;
	stack.b = NULL;
	parse_numbers(&stack.a, ac, av);
	print_all_stacks(&stack.a, &stack.b);
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
	print_all_stacks(&stack.a, &stack.b);
	exit_prog(&stack.a, &stack.b, 0);
}
