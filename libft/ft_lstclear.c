/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:28:10 by ayassir           #+#    #+#             */
/*   Updated: 2022/04/14 15:28:30 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_node **lst, void (*del)(int))
{
	t_node	*tmp;
	t_node	*temp;

	if (!*lst)
		return ;
	tmp = *lst;
	temp = *lst;
	while (tmp != NULL)
	{
		temp = temp->next;
		del(tmp->data);
		free(tmp);
		tmp = temp;
	}
	*lst = NULL;
}
