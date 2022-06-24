/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:11:50 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/19 20:44:01 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	malloc_error(int n)
{
	(void) n;
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	simple_error(int n)
{
	(void) n;
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	sorted_error(int n)
{
	(void) n;
	exit(EXIT_FAILURE);
}

void	duplicate_error(int n)
{
	(void) n;
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	alpha_error(int n)
{
	(void) n;
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}
