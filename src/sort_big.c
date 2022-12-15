/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:50:29 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/12/15 20:04:37 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	get_index(t_list **a, int min)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *a;
	while (++i <= ft_lstsize(*a))
	{
		while (tmp && tmp->value != min)
			tmp = tmp->next;
		tmp->index = i;
	}
}

void	sort_big(t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	len;
	int	max;
	int	min;
	int	max_bits;
	t_list	*tmp;

	max = (*a)->value;
	min = (*a)->value;
	get_max_min(a, &max, &min);
	get_index(a, min);
	max_bits = -1;
	while ((max >> ++max_bits) != 0)
		;
	i = -1;
	len = ft_lstsize(*a);
	while (++i < max_bits)
	{
		j = 0;
		while (j++ < len)
		{
			tmp = *a;
			if ((tmp->index >> i & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (ft_lstsize(*b))
			pa(a, b);
	}
}
	