/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_operations_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:44:28 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/20 12:06:29 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	rotate_b_bonus(t_node **l_b)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!(*l_b))
		return ;
	tmp = *(l_b);
	if (tmp->next == NULL)
		return ;
	*(l_b) = (*l_b)->next;
	tmp->next = NULL;
	tmp2 = ft_lstlast(*l_b);
	tmp2->next = tmp;
}

void	swap_b_bonus(t_node **l_b)
{
	int		swap;

	if (!(*l_b))
		return ;
	swap = (*l_b)->data;
	(*l_b)->data = (*l_b)->next->data;
	(*l_b)->next->data = swap;
	swap = (*l_b)->index;
	(*l_b)->index = (*l_b)->next->index;
	(*l_b)->next->index = swap;
}

void	rotate_reverse_b_bonus(t_node **l_b)
{
	t_node	*head;
	t_node	*tmp2;

	if (!(*l_b))
		return ;
	head = (*l_b);
	while (((*l_b)->next)->next)
		(*l_b) = (*l_b)->next;
	tmp2 = (*l_b)->next;
	(*l_b)->next = NULL;
	ft_lstadd_front(&head, tmp2);
	(*l_b) = head;
}

void	swap_s_bonus(t_node **l_a, t_node **l_b)
{
	if (*l_a)
		swap_a_bonus(l_a);
	if (*l_b)
		swap_b_bonus(l_b);
}

void	rotate_r_bonus(t_node **l_a, t_node **l_b)
{
	if (*l_a)
		rotate_a_bonus(l_a);
	if (*l_b)
		rotate_b_bonus(l_b);
}
