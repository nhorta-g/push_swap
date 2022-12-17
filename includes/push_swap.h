/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:35:15 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/22 18:05:53 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>

# include "../libft/libft.h"

/*Structs for both stacks*/
typedef struct s_stack
{
	t_list	*a;
	t_list	*b;
}			t_stack;

/*Print stacks*/
void	print_stack(t_list **stack);
void	print_all_stacks(t_list **stack_a, t_list **stack_b);

/*List creation and free*/
void	del_first_node(t_list **lst);
void	del_last_node(t_list **lst);
void	free_stack(t_list **stack);
void	exit_prog(t_list **a, t_list **b, int trigger);

/*Checkers*/
int		check_order(t_list *stack);
void	get_max_min(t_list **a, int *max, int *min);

/*Sorters*/
void	sort2(t_list **stack);
void	sort3(t_list **stack);
void	sort5(t_list **a, t_list **b);
void	sort_big(t_list **a, t_list **b);

/*Operations on stakcs*/
void	sb(t_list **a);
void	sa(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

#endif
