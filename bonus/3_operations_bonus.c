/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_operations_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:49:30 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/19 20:36:56 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	rotate_reverse_r_bonus(t_node **l_a, t_node **l_b)
{
	rotate_reverse_a_bonus(l_a);
	rotate_reverse_b_bonus(l_b);
}

void	checker_decision(t_node **l_a, int ac, int rd)
{
	if (if_sorted(l_a, ac) == 1 && rd == 0)
	{
		ft_printf("OK\n");
		exit(EXIT_SUCCESS);
	}
	else if (if_sorted(l_a, ac) != 1 && rd == 0)
	{
		ft_printf("KO\n");
		exit(EXIT_FAILURE);
	}
}
