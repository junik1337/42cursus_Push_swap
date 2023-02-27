/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:56:10 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/27 12:37:27 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "../ft_printf/ft_printf.h"

typedef struct node {
	int						index;
	int						data;
	struct node				*next;
}			t_node;

typedef struct params {
	int						l_size;
	int						j;
	int						j2;
	int						i;
	int						rd;
	int						ac;
}				t_params;

void	swap_a_bonus(t_node **l_a);
void	push_b_bonus(t_node **l_b, t_node **l_a, int dta, int indx);
void	push_a_bonus(t_node **l_b, t_node **l_a);
void	rotate_a_bonus(t_node **l_a);
void	rotate_reverse_a_bonus(t_node **l_a);
void	rotate_b_bonus(t_node **l_b);
void	swap_b_bonus(t_node **l_b);
void	rotate_reverse_b_bonus(t_node **l_b);
void	swap_s_bonus(t_node **l_a, t_node **l_b);
void	rotate_r_bonus(t_node **l_a, t_node **l_b);
void	rotate_reverse_r_bonus(t_node **l_a, t_node **l_b);
void	small_first(t_node **l_a, int pos, int size);
void	get_new_index(t_node *tmp, int size);
void	is_list_alpha(char *str);
void	get_big_index(t_node **l_a, t_params *p);
void	push_to_b_a(t_node **l_a, t_params *p);
int		get_position_index(t_node **l_b, t_params *p);
void	push_to_a(t_node **l_a, t_node **l_b, t_params *p);
void	ft_init_params(t_params *p);
void	check_if_valid(char *str);
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstnew(int content);
void	ft_lstdelone(t_node *lst, void (*del)(int));
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstadd_back(t_node **lst, t_node *new);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
void	malloc_error(int n);
void	simple_error(int n);
void	sorted_error(int n);
void	alpha_error(int n);
void	duplicate_error(int n);
void	printlist(t_node **start);
char	*ft_strdup(const char *s1);
void	is_list_sorted(t_node *l_a, int number);
void	is_list_duplicated(t_node *l_a);
void	printlist(t_node **start);
int		get_small_position(t_node *head, int size, int comp);
int		get_big_position(t_node *head, int size, int comp);
int		ft_lstsize(t_node *lst);
int		ft_strlen(const char *str);
int		if_sorted(t_node **l_a, int number);
void	checker_decision(t_node **l_a, int ac, int rd);
int		ft_strcmp(char *s1, char *s2);
#endif