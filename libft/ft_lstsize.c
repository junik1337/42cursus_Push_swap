/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:10:21 by ayassir           #+#    #+#             */
/*   Updated: 2022/04/14 15:26:47 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_node *lst)
{
	int		length;
	t_node	*temp;

	length = 0;
	temp = lst;
	if (!lst)
		return (0);
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	return (length);
}
