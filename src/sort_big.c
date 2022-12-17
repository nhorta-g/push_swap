/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:50:29 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/12/17 17:24:56 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*puts the content of the stack in a array
used for index*/
static long long	*stack_to_array(t_list *a)
{
	long long	*arr;
	int			i;
	t_list		*tmp;
	int			size;

	size = ft_lstsize(a);
	arr = (long long *)malloc(sizeof(long long) * size);
	if (!arr)
		return (NULL);
	size = ft_lstsize(a);
	tmp = a;
	i = -1;
	while (tmp && ++i < size)
	{
		arr[i] = tmp->value;
		tmp = tmp->next;
	}
	return (arr);
}

/*ordenates the array using the selection sort algorithm and returns
the sorted array*/
static long long	*selection_sort_array(long long *array, int size)
{
	long long	tmp;
	int			i;
	int			j;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
	return (array);
}

/*Passes index to stack from the sorted array created above*/
static void	index_stack(t_list **a)
{
	int			i;
	int			size;
	long long	*arr;
	t_list		*tmp;

	size = ft_lstsize(*a);
	arr = selection_sort_array(stack_to_array(*a), size);
	tmp = *a;
	while (tmp)
	{
		i = -1;
		while (++i < size)
		{
			if (arr[i] == tmp->value)
				tmp->index = i;
		}
		tmp = tmp->next;
	}
	free(arr);
}

static void	radix(t_list **a, t_list **b, int max_bits)
{
	int		i;
	int		j;
	int		len;
	t_list	*tmp;

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

void	sort_big(t_list **a, t_list **b)
{
	long long	max;
	long long	min;
	int			max_bits;

	index_stack(a);
	max = (*a)->value;
	min = (*a)->value;
	get_max_min(a, &max, &min);
	max_bits = -1;
	while ((max >> ++max_bits) != 0)
		;
	radix(a, b, max_bits);
}
