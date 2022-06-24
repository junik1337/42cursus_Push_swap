/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:22:30 by ayassir           #+#    #+#             */
/*   Updated: 2022/06/24 09:35:57 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_b(t_node **l_b)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = *(l_b);
	if (!tmp)
		simple_error(1);
	if (tmp->next == NULL)
		return ;
	*(l_b) = (*l_b)->next;
	tmp->next = NULL;
	tmp2 = ft_lstlast(*l_b);
	tmp2->next = tmp;
	ft_printf("rb\n");
}

void	swap_b(t_node **l_b)
{
	int		swap;

	swap = (*l_b)->data;
	(*l_b)->data = (*l_b)->next->data;
	(*l_b)->next->data = swap;
	swap = (*l_b)->index;
	(*l_b)->index = (*l_b)->next->index;
	(*l_b)->next->index = swap;
	ft_printf("sb\n");
}

void	rotate_reverse_b(t_node **l_b)
{
	t_node	*head;
	t_node	*tmp2;

	head = (*l_b);
	while (((*l_b)->next)->next)
		(*l_b) = (*l_b)->next;
	tmp2 = (*l_b)->next;
	(*l_b)->next = NULL;
	ft_lstadd_front(&head, tmp2);
	(*l_b) = head;
	ft_printf("rrb\n");
}

void	swap_s(t_node **l_a, t_node **l_b)
{
	swap_a(l_a);
	swap_b(l_b);
	ft_printf("ss\n");
}

void	rotate_r(t_node **l_a, t_node **l_b)
{
	rotate_a(l_a);
	rotate_b(l_b);
	ft_printf("rr\n");
}
