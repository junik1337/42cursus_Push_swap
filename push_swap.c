/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:16:16 by ayassir           #+#    #+#             */
/*   Updated: 2022/06/23 19:08:47 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

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
	t_node		*l_a;

	l_a = malloc(sizeof(t_node));
	if (!l_a)
		malloc_error(1);
	if (ac > 2)
	{
		l_a = set_linked_list(av, ac);
		is_list_sorted(l_a, ac);
		is_list_duplicated(l_a);
		sort_stack(&l_a);
	}
	else
		return (0);
	free (l_a);
	return (0);
}
