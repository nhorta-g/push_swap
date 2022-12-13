/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_5_and_max_min.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:20:31 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/12/13 19:51:51 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_max_min(t_list **a, int *max, int *min)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->value > *max)
			*max = tmp->value;
		if (tmp->value < *min)
			*min = tmp->value;
		tmp = tmp->next;
	}
}

void	sort5(t_list **a, t_list **b)
{
	int min;
	int max;

	min = INT_MIN;
	max = INT_MAX;
	get_max_min(a, &max, &min);
	while (ft_lstsize(*a) > 3)
	{
		while ((*a)->value != max && (*a)->value != min)
		{
			ra(a);
			printf("max: %d\n", max);
			printf("min: %d\n", min);
		}
		pb(b, a);
	}
	sort3(a);
	if (ft_lstsize(*b) == 2 && (*b)->value < (*b)->next->value)
		rb(b);
	pa(a, b);
	if ((*a)->value > (*a)->next->value)
		ra(a);
	pa(a, b);
}
