/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:30:57 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/15 18:33:38 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!*lst)
	{
		*lst = new;
		(*lst)->next = NULL;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
