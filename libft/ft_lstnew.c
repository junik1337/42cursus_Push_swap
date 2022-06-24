/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:43:19 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/15 18:33:01 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstnew(int content)
{
	t_node	*lst;

	(void) content;
	lst = malloc(sizeof(t_node));
	if (!lst)
		return (NULL);
	lst = NULL;
	return (lst);
}
