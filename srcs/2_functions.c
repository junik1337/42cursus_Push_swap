/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_functions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:06:23 by ayassir           #+#    #+#             */
/*   Updated: 2022/06/24 09:35:55 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	small_first(t_node **l_a, int pos, int size)
{
	int		inc;

	if (pos > size / 2)
	{
		inc = pos;
		while (inc <= size)
		{
			rotate_reverse_a(l_a);
			inc++;
		}
	}
	else if (pos <= size / 2)
	{
		size = 1;
		while (size < pos)
		{
			rotate_a(l_a);
			size++;
		}
	}
}

void	get_new_index(t_node *tmp, int size)
{
	int		i;

	i = 1;
	while (size > 0 && tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		size--;
		i++;
	}
}

void	is_list_alpha(char *str)
{
	int		i;
	int		space;

	space = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
			alpha_error(1);
		else if (str[i] == ' ')
			space++;
		i++;
	}
	if (space == (int)ft_strlen(str))
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
}

void	get_big_index(t_node **l_a, t_params *p)
{
	t_node		*tmp;
	t_node		*tmp2;
	int			size;
	int			size2;
	int			i;

	i = 0;
	size = p->l_size;
	tmp = *l_a;
	while (tmp && size > 0)
	{
		tmp2 = *l_a;
		size2 = p->l_size;
		i = 1;
		while (tmp2 && size2 > 0 && tmp)
		{
			if (tmp->data > tmp2->data)
				i++;
			tmp2 = tmp2->next;
			size2--;
		}
		tmp->index = i;
		tmp = tmp->next;
		size--;
	}
}

void	push_to_b_a(t_node **l_a, t_params *p)
{
	t_node		*l_b;

	l_b = ft_lstnew(6);
	ft_init_params(p);
	while (ft_lstsize((*l_a)) > 0)
	{
		if ((*l_a)->index < p->i)
		{
			push_b(&l_b, l_a, (*l_a)->data, (*l_a)->index);
			if (ft_lstsize(l_b) >= 2)
				rotate_b(&l_b);
			p->i++;
		}
		else if ((*l_a)->index <= (p->i + p->j))
		{
			push_b(&l_b, l_a, (*l_a)->data, (*l_a)->index);
			p->i++;
		}
		else
			rotate_a(l_a);
		if (ft_lstsize(l_b) >= 2 && l_b->data < l_b->next->data)
			swap_b(&l_b);
	}
	push_to_a(l_a, &l_b, p);
}
