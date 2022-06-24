/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:54:16 by ayassir           #+#    #+#             */
/*   Updated: 2022/04/14 16:13:09 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstmap(t_node *lst, int (*f)(int), void (*del)(int))
{
	t_node	*res;
	t_node	*res1;

	if (!lst)
		return (NULL);
	res1 = NULL;
	while (lst)
	{
		res = ft_lstnew(f(lst->data));
		if (!res)
		{
			del(res1->data);
			free(res1);
			return (res1);
		}
		ft_lstadd_back(&res1, res);
		lst = lst->next;
	}
	return (res1);
}
