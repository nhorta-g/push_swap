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

static void	print_stack(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (*tmp)
	{
		printf("num: %d\n", tmp->content);
		tmp = tmp->next;
	}
}

static void	parse_numbers(t_list **stack, int ac, char **av)
{
	int i;

	i = 1;
	ft_lstadd_front(stack, ft_lstnew(atoi(av[1]));
	while (++i < ac)
		ft_lstadd_back(stack, ft_lstnew(atoi(av[i]));
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac < 2)
		ft_printf("Error\nWrong number of arguments\n");
	stack.a = NULL;
	stack.b = NULL;
	parse_numbers(&stack.a, ac, av);
	print_stack(stack.a);
}
