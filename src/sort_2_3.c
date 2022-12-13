/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:47:50 by marvin            #+#    #+#             */
/*   Updated: 2022/12/08 19:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort2(t_list **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort3(t_list **a)
{
	int	fst;
	int	sec;
	int	thr;

	fst = (*a)->value;
	sec = (*a)->next->value;
	thr = (*a)->next->next->value;
	if ((fst < sec) && (sec > thr) && (fst > thr))
		ra(a);
	if ((fst < sec) && (sec > thr) && (fst < thr))
	{
		sa(a);
		ra(a);
	}
	if ((fst > sec) && (sec < thr) && (fst < thr))
		sa(a);
	if ((fst > sec) && (sec < thr) && (fst > thr))
		ra(a);
	if ((fst > sec) && (sec > thr) && (fst > thr))
	{
		sa(a);
		rra(a);
	}
	return ;
}
