/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_libft_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:02:47 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/20 12:24:08 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

long	ft_atoi(const char *str)
{
	int			min;
	int			j;
	long		res;

	min = 1;
	j = 0;
	res = 0;
	while ((str[j] == '\t' || str [j] == '\n')
		|| (str[j] == '\v' || str [j] == '\f')
		|| (str[j] == '\r' || str [j] == ' '))
		j++;
	if (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			min = -min;
		j++;
	}
	while (str[j] >= '0' && str[j] <= '9')
	{
		res = (res * 10) + (str[j] - '0');
		j++;
	}
	return (res * min);
}

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

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(ft_strlen(s1) + 1);
	if (!p)
		return (0);
	while (s1[i] != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return (1);
	}
	return (0);
}
