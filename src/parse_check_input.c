/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:08:25 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/12/17 17:18:47 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static long	atoi_parse(char **str)
{
	int			s;
	long long	n;

	s = 1;
	n = 0;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			s *= -1;
		*str += 1;
	}
	while (ft_isdigit(**str))
	{
		n = n * 10 + s * (**str - '0');
		if (n < INT_MIN || n > INT_MAX)
			return (2147483648);
		*str += 1;
	}
	if (!((**str > 8 && **str < 14) || **str == 32) && **str != '\0')
		return (2147483648);
	return (n);
}

static int	duplicate(t_list *a, long long n)
{
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

static	void first_node(t_list **a, char *av)
{
	while ((*av > 8 && *av < 14) || *av == 32)
		av++;
	if (!*av || ((*av == '+' || *av == '-') && !av))
		exit_prog(a, NULL, 1);
	ft_lstadd_front(a, ft_lstnew_int_index(atoi_parse(&av), 0));
}

void	parse_args(t_list **a, char **av)
{
	char		*s;
	int			i;
	long long	n;

	i = 1;
	n = 0;
	first_node(a, av[1]);
	while (av[++i])
	{
		s = av[i];
		while ((*s > 8 && *s < 14) || *s == 32)
				s++;
		if (!*s || ((*s == '+' || *s == '-') && !s[1]))
			exit_prog(a, NULL, 1);
		while (*s)
		{
			while ((*s > 8 && *s < 14) || *s == 32)
				s++;
			n = atoi_parse(&s);
			if (n > INT_MAX)
				exit_prog(a, NULL, 1);
			if (duplicate(*a, n))
				exit_prog(a, NULL, 1);
			ft_lstadd_back(a, ft_lstnew_int_index(n, 0));
		}
	}
}
