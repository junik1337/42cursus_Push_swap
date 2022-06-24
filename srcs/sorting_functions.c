/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:46:27 by ayassir           #+#    #+#             */
/*   Updated: 2022/06/24 09:36:05 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_node **l_a)
{
	if ((*l_a)->data > (*l_a)->next->data
		&& (*l_a)->next->data < (*l_a)->next->next->data
		&& (*l_a)->data < (*l_a)->next->next->data)
		swap_a(l_a);
	else if ((*l_a)->data > (*l_a)->next->data
		&& (*l_a)->next->data > (*l_a)->next->next->data
		&& (*l_a)->data > (*l_a)->next->next->data)
	{
		swap_a(l_a);
		rotate_reverse_a(l_a);
	}
	else if ((*l_a)->data > (*l_a)->next->data
		&& (*l_a)->next->data < (*l_a)->next->next->data
		&& (*l_a)->data > (*l_a)->next->next->data)
		rotate_a(l_a);
	else if ((*l_a)->data < (*l_a)->next->data
		&& (*l_a)->next->data > (*l_a)->next->next->data
		&& (*l_a)->data < (*l_a)->next->next->data)
	{
		swap_a(l_a);
		rotate_a(l_a);
	}
	else if ((*l_a)->data < (*l_a)->next->data
		&& (*l_a)->next->data > (*l_a)->next->next->data)
		rotate_reverse_a(l_a);
}

void	sort_four(t_node **l_a, t_params *p)
{
	t_node		*tmp;
	t_node		*l_b;
	int			size;
	int			pos;

	tmp = *l_a;
	size = p->l_size;
	l_b = ft_lstnew(6);
	pos = get_small_position(tmp, size, INT32_MAX);
	small_first(l_a, pos, size);
	push_b(&l_b, l_a, (*l_a)->data, (*l_a)->index);
	sort_three(l_a);
	push_a(&l_b, l_a);
}

void	sort_five(t_node **l_a, t_params *p)
{
	t_node		*l_b;
	t_node		*tmp;
	int			pos_s;

	tmp = *l_a;
	l_b = ft_lstnew(6);
	pos_s = get_small_position(tmp, p->l_size, INT32_MAX);
	small_first(l_a, pos_s, p->l_size);
	push_b(&l_b, l_a, (*l_a)->data, (*l_a)->index);
	tmp = *l_a;
	get_new_index(tmp, p->l_size);
	pos_s = get_small_position(tmp, p->l_size, INT32_MAX);
	small_first(l_a, pos_s, p->l_size - 1);
	push_b(&l_b, l_a, (*l_a)->data, (*l_a)->index);
	sort_three(l_a);
	push_a(&l_b, l_a);
	push_a(&l_b, l_a);
}

void	sort_stack(t_node **l_a)
{
	t_params	*p;

	p = malloc(sizeof(t_params));
	if (!p)
		malloc_error(1);
	p->l_size = ft_lstsize(*l_a);
	if (p->l_size <= 3)
	{
		if (p->l_size == 2)
			swap_a(l_a);
		else
			sort_three(l_a);
	}
	else if (p->l_size == 4)
		sort_four(l_a, p);
	else if (p->l_size == 5)
		sort_five(l_a, p);
	else if (p->l_size > 5)
	{
		get_big_index(l_a, p);
		push_to_b_a(l_a, p);
	}
	else
		simple_error(1);
}
