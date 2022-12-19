/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_5_and_max_min.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:20:31 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/12/19 19:01:25 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort5(t_list **a, t_list **b)
{
	long long	max;
	long long	min;

	pb(b, a);
	max = (*a)->index;
	min = (*a)->index;
	get_max_min(a, &max, &min);
	while ((*a)->index != max && (*a)->index != min)
		ra(a);
	pb(a, b);
	while (ft_lstsize(*a) > 3)
	{
		while ((*a)->index != max && (*a)->index != min)
			ra(a);
		pb(a, b);
	}
	sort3(a);
	if (ft_lstsize(*b) == 2 && (*b)->index < (*b)->next->index)
		rb(b);
	pa(a, b);
	if ((*a)->index > (*a)->next->index)
		ra(a);
	pa(a, b);
}
