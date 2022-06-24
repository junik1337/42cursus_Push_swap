/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:31:42 by ayassir           #+#    #+#             */
/*   Updated: 2022/06/24 09:36:01 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_reverse_r(t_node **l_a, t_node **l_b)
{
	rotate_reverse_a(l_a);
	rotate_reverse_b(l_b);
	ft_printf("rrr\n");
}
