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

static void	print_stack(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	if (tmp == NULL)
		write(1, "EMPTY STACK", 11);
	while (tmp)
	{
		printf("num: %d\n", tmp->value);
		tmp = tmp->next;
	}
}

static void	parse_numbers(t_list **stack, int ac, char **av)
{
	int i;

	i = 1;
	ft_lstadd_front(stack, ft_lstnewint(atoi(av[1])));
	while (++i < ac)
		ft_lstadd_back(stack, ft_lstnewint(atoi(av[i])));
}

static void test_moves(t_list **stack.a, t_list **stack.b)
{
	/*PRINT*/
	write(1, "\n__________\n", 12);
	write(1, "    STACK A\n", 12);
	print_stack(stack.a);
	write(1, "\n   STACK B\n", 12);
	print_stack(stack.b);
	write(1, "\n__________\n\n", 13);
			/*MOVE*/
	pb(&stack.a, &stack.b);
	pb(&stack.a, &stack.b);
	pb(&stack.a, &stack.b);
	rrr(&stack.a, &stack.b);

			/*PRINT*/
	write(1, "\n__________\n", 12);
	write(1, "    STACK A\n", 12);
	print_stack(stack.a);
	write(1, "\n   STACK B\n", 12);
	print_stack(stack.b);
	write(1, "\n__________\n\n", 13);
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac < 2)
		printf("Error\nWrong number of arguments\n");
	stack.a = NULL;
	stack.b = NULL;
	parse_numbers(&stack.a, ac, av);
	test_moves(stack.a, stack.b);
	if (check_order(stack.a) == 0)
	{
		if (ft_lstsize(stack.a) == 2)
			sort2(&stack.a);
		if (ft_lstsize(stack.a) == 3)
			sort3(&stack.a);
		/*
		if (ft_lstsize(stack.a) == 4)
			sort4(&stack.a, &stack.b);
		if (ft_lstsize(stack.a) == 5)
			sort5(&stack.a, &stack.b);
		if (ft_lstsize(stack.a) >= 6)
			binary_sort(&stack.a, &stack.b);
		*/
	}
}
