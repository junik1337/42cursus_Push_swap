/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:42:30 by ayassir           #+#    #+#             */
/*   Updated: 2022/06/24 09:35:52 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_node **l_a)
{
	int		swap;

	swap = (*l_a)->data;
	(*l_a)->data = (*l_a)->next->data;
	(*l_a)->next->data = swap;
	swap = (*l_a)->index;
	(*l_a)->index = (*l_a)->next->index;
	(*l_a)->next->index = swap;
	ft_printf("sa\n");
}

void	push_b(t_node **l_b, t_node **l_a, int dta, int indx)
{
	t_node	*head;

	head = malloc(sizeof(t_node));
	head->data = dta;
	head->index = indx;
	head->next = NULL;
	ft_lstadd_front(l_b, head);
	(*l_a) = (*l_a)->next;
	ft_printf("pb\n");
}

void	push_a(t_node **l_b, t_node **l_a)
{
	t_node	*head;

	head = malloc(sizeof(t_node));
	head->data = (*l_b)->data;
	head->next = NULL;
	ft_lstadd_front(l_a, head);
	(*l_b) = (*l_b)->next;
	ft_printf("pa\n");
}

void	rotate_a(t_node **l_a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = *(l_a);
	*(l_a) = (*l_a)->next;
	tmp->next = NULL;
	tmp2 = ft_lstlast(*l_a);
	tmp2->next = tmp;
	ft_printf("ra\n");
}

void	rotate_reverse_a(t_node **l_a)
{
	t_node	*head;
	t_node	*tmp2;

	head = (*l_a);
	while (((*l_a)->next)->next)
		(*l_a) = (*l_a)->next;
	tmp2 = (*l_a)->next;
	(*l_a)->next = NULL;
	ft_lstadd_front(&head, tmp2);
	(*l_a) = head;
	ft_printf("rra\n");
}
