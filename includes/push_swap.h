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

# include "../libft/libft.h"

typedef struct s_stack
{
	struct s_list	*a;
	struct s_list	*b;
}	t_stack;

/*List creation and free*/
void	del_first_node(t_list **lst);
void	del_last_node(t_list **lst);

/*Checkers*/
int		check_order(t_list *stack);
void	find_min(t_lst **stack, int *min);
void	find_max(t_lst **stack, int *max);

/*Sorters*/
void	sort2(t_list **stack);
void	sort3(t_list **stack);
/*
void	sort4(t_list **stack);
void	sort5(t_list **stack);
*/

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
