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
void	del_one(t_list **lst);
void	del_last(t_list **lst);

/*Operations on stakcs*/
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	reverse_a(t_list **a);
void	reverse_b(t_list **b);
void	rotate_both(t_list **a, t_list **b);

#endif
