/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:41:43 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/22 18:18:19 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_list **a, t_list **b)
{
	if (b && *b)
	{
		ft_lstadd_front(a, ft_lstnew_int_index((*b)->value, (*b)->index));
		del_first_node(b);
		write(1, "pa\n", 3);
	}
	return ;
}

void	pb(t_list **a, t_list **b)
{
	if (a && *a)
	{
		ft_lstadd_front(b, ft_lstnew_int_index((*a)->value, (*a)->index));
		del_first_node(a);
		write(1, "pb\n", 3);
	}
	return ;
}
