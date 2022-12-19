/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:50:29 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/12/19 23:49:56 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	radix(t_list **a, t_list **b, int max_bits)
{
	int		i;
	int		j;
	int		len;
	t_list	*tmp;

	i = -1;
	len = ft_lstsize(*a);
	printf("len: %d \n", len);
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

void	sort_big(t_list **a, t_list **b)
{
	long long	max;
	long long	min;
	int			max_bits;

	max = (*a)->index;
	min = (*a)->index;
	get_max_min(a, &max, &min);
	max_bits = -1;
	while ((max >> ++max_bits) != 0)
		;
	printf("max: %lld\n", max);
	printf("maxbits: %d\n", max_bits);
	radix(a, b, max_bits);
}
