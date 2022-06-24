/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_functions_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:39:13 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/19 19:14:53 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	is_list_sorted(t_node *l_a, int number)
{
	int			i;
	t_node		*node;

	i = 0;
	node = l_a;
	while (++i < number && node->next)
	{
		if (node->data > node->next->data)
			return ;
		node = node->next;
	}
	sorted_error(1);
}

void	is_list_duplicated(t_node *l_a)
{
	t_node		*test;
	int			i;
	int			str[10000];

	test = l_a;
	i = 0;
	while (i < 10000)
		str[i++] = 0;
	i = 0;
	while (test)
	{
		if (str[test->data] == 0)
			str[test->data] = 1;
		else if (str[test->data] == 1)
			duplicate_error(1);
		test = test->next;
	}
}

void	printlist(t_node **start)
{
	t_node		*temp;

	temp = *start;
	ft_printf("----------\n");
	while (temp)
	{
		ft_printf("%d, index --> %d\n", temp->data, temp->index);
		temp = temp->next;
	}
	ft_printf("\n----------\n");
}

int	get_small_position(t_node *head, int size, int comp)
{
	int		pos;
	int		i;

	pos = 0;
	i = 0;
	while (i < size && head)
	{
		if (comp > head->data)
		{
			comp = head->data;
			pos = i + 1;
		}
		i++;
		head = head->next;
	}
	return (pos);
}

int	get_big_position(t_node *head, int size, int comp)
{
	int		pos;

	while (size > 0 && head)
	{
		if (comp < head->data)
		{
			comp = head->data;
			pos = head->data;
		}
		size--;
		head = head->next;
	}
	return (pos);
}
