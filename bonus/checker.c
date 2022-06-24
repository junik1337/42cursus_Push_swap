/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:40:45 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/20 12:24:39 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	operations_selected(t_node **l_a, t_node **l_b, char *buf)
{
	if (ft_strcmp(buf, "pa") == 0)
		push_a_bonus(l_b, l_a);
	else if (ft_strcmp(buf, "pb") == 0)
		push_b_bonus(l_b, l_a, (*l_a)->data, (*l_a)->index);
	else if (ft_strcmp(buf, "ra") == 0)
		rotate_a_bonus(l_a);
	else if (ft_strcmp(buf, "rb") == 0)
		rotate_b_bonus(l_b);
	else if (ft_strcmp(buf, "rr") == 0 && ft_strlen(buf) == 2)
		rotate_r_bonus(l_a, l_b);
	else if (ft_strcmp(buf, "sa") == 0)
		swap_a_bonus(l_a);
	else if (ft_strcmp(buf, "sb") == 0)
		swap_b_bonus(l_b);
	else if (ft_strcmp(buf, "ss") == 0)
		swap_s_bonus(l_a, l_b);
	else if (ft_strcmp(buf, "rra") == 0)
		rotate_reverse_a_bonus(l_a);
	else if (ft_strcmp(buf, "rrb") == 0)
		rotate_reverse_b_bonus(l_b);
	else if (ft_strcmp(buf, "rrr") == 0)
		rotate_reverse_r_bonus(l_a, l_b);
	else
		simple_error(1);
}

char	**ft_split_numbers(char **av, int ac)
{
	static char		**splited;
	char			**ret;
	int				i;
	int				j;
	int				l;

	i = 1;
	j = 0;
	ret = malloc(sizeof(char *) * ac);
	while (av[i])
	{
		l = 0;
		splited = ft_split(av[i], ' ');
		while (splited[l])
		{
			ret[j] = ft_strdup(splited[l]);
			if (j == 0)
				check_if_valid(ret[j]);
			j++;
			l++;
		}
		i++;
	}
	ret[j] = NULL;
	return (ret);
}

void	others_nodes(char **av, t_node *node)
{
	t_node	*node_next;
	t_node	*tmp;
	int		i;

	i = 1;
	node->data = ft_atoi(av[0]);
	node->index = 1;
	node->next = NULL;
	tmp = node;
	while (av[i] != NULL)
	{
		node_next = malloc(sizeof(t_node));
		if (!node_next)
			malloc_error(1);
		is_list_alpha(av[i]);
		check_if_valid(av[i]);
		node_next->data = ft_atoi(av[i]);
		tmp->next = node_next;
		tmp = tmp->next;
		i++;
	}
	tmp->next = NULL;
}

struct node	*set_linked_list(char **av, int ac)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		malloc_error(1);
	av = ft_split_numbers(av, ac);
	others_nodes(av, node);
	free (av);
	return (node);
}

int	main(int ac, char **av)
{
	int			rd;
	char		buffer[4];
	t_node		*l_a;
	t_node		*l_b;

	rd = 1;
	if (ac > 1)
	{
		l_a = ft_lstnew(6);
		l_b = ft_lstnew(6);
		l_a = set_linked_list(av, ac);
		while (rd > 0)
		{
			rd = read(0, buffer, 1024);
			checker_decision(&l_a, ac, rd);
			if (rd < 0)
				simple_error(1);
			operations_selected(&l_a, &l_b, buffer);
		}
	}
	else
		return (0);
}
