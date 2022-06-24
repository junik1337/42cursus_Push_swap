/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_functions_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:39:54 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/19 19:19:35 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	get_position_index(t_node **l_b, t_params *p)
{
	t_node	*tmp;
	int		i;

	tmp = *l_b;
	i = 1;
	while (p->l_size > 0 && tmp)
	{
		if (tmp->index == p->l_size)
		{
			p->l_size--;
			break ;
		}
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	push_to_a(t_node **l_a, t_node **l_b, t_params *p)
{
	int		position;
	int		size;
	int		pos_size;

	size = p->l_size + 1;
	while (--size > 0 && l_a && l_b)
	{
		position = get_position_index(l_b, p);
		if (position <= (ft_lstsize(*l_b) / 2))
		{
			while ((position > 1) && l_b && ft_lstsize(*l_b) >= 2)
			{
				rotate_b_bonus(l_b);
				position--;
			}
		}
		else if (position > (ft_lstsize(*l_b) / 2))
		{
			pos_size = (ft_lstsize(*l_b) - position) + 2;
			while (--pos_size > 0 && l_b && ft_lstsize(*l_b) >= 2)
				rotate_reverse_b_bonus(l_b);
		}
		push_a_bonus(l_b, l_a);
	}
}

void	ft_init_params(t_params *p)
{
	p->i = 2;
	p->j = 15;
	if (p->l_size > 250)
		p->j = 25;
}

void	check_if_valid(char *str)
{
	if (ft_strlen(str) > 10)
		simple_error(1);
	if (ft_atoi(str) > INT32_MAX || ft_atoi(str) < INT32_MIN)
		simple_error(1);
}

int	if_sorted(t_node **l_a, int number)
{
	int			i;
	t_node		*node;

	i = 0;
	node = *l_a;
	while (++i < number && node->next)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}
