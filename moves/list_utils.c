/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:58:29 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/11/22 13:46:40 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	del_one(t_listx **lst)
{
	t_listx	*temp;

	if (!lst || !*lst)
		return ;
	temp = (*lst);
	temp = temp->next;
	free (*lst);
	(*lst) = temp;
}

void	del_last(t_listx **lst)
{
	t_listx	*temp;

	if (!lst || !*lst)
		return ;
	temp = (*lst);
	while (temp->next)
		temp = temp->next;
	free (temp);
}
