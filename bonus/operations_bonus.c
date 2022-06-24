/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:41:43 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/19 21:17:13 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	swap_a_bonus(t_node **l_a)
{
	int		swap;

	if (!(*l_a))
		return ;
	swap = (*l_a)->data;
	(*l_a)->data = (*l_a)->next->data;
	(*l_a)->next->data = swap;
	swap = (*l_a)->index;
	(*l_a)->index = (*l_a)->next->index;
	(*l_a)->next->index = swap;
}

void	push_b_bonus(t_node **l_b, t_node **l_a, int dta, int indx)
{
	t_node	*head;

	if (!(*l_a))
		return ;
	head = malloc(sizeof(t_node));
	head->data = dta;
	head->index = indx;
	head->next = NULL;
	ft_lstadd_front(l_b, head);
	(*l_a) = (*l_a)->next;
}

void	push_a_bonus(t_node **l_b, t_node **l_a)
{
	t_node	*head;

	if (!(*l_b))
		return ;
	head = malloc(sizeof(t_node));
	head->data = (*l_b)->data;
	head->next = NULL;
	ft_lstadd_front(l_a, head);
	(*l_b) = (*l_b)->next;
}

void	rotate_a_bonus(t_node **l_a)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!(*l_a))
		return ;
	tmp = *(l_a);
	*(l_a) = (*l_a)->next;
	tmp->next = NULL;
	tmp2 = ft_lstlast(*l_a);
	tmp2->next = tmp;
}

void	rotate_reverse_a_bonus(t_node **l_a)
{
	t_node	*head;
	t_node	*tmp2;

	if (!(*l_a))
		return ;
	head = (*l_a);
	while (((*l_a)->next)->next)
		(*l_a) = (*l_a)->next;
	tmp2 = (*l_a)->next;
	(*l_a)->next = NULL;
	ft_lstadd_front(&head, tmp2);
	(*l_a) = head;
}
