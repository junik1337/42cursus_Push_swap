/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:16:14 by ayassir           #+#    #+#             */
/*   Updated: 2023/02/27 12:35:29 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../ft_printf/ft_printf.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>

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
}				t_params;

t_node		*ft_lstlast(t_node *lst);
t_node		*ft_lstnew(int content);
char		**ft_split(char const *s, char c);
char		*ft_strdup(const char *s1);
long		ft_atoi(const char *str);
void		push_b(t_node **l_b, t_node **l_a, int val, int indx);
void		is_list_sorted(t_node *l_a, int args_number);
void		ft_tens(t_node **l_a, t_node *l_b, int size);
void		rotate_reverse_r(t_node **l_a, t_node **l_b);
void		ft_lstdelone(t_node *lst, void (*del)(int));
void		ft_lstadd_back(t_node **lst, t_node *new);
void		get_big_index(t_node **l_a, t_params *p);
void		push_to_b_a(t_node **l_a, t_params *p);
void		rotate_r(t_node **l_a, t_node **l_b);
void		get_new_index(t_node *tmp, int size);
void		swap_s(t_node **l_a, t_node **l_b);
void		push_a(t_node **l_b, t_node **l_a);
void		is_list_duplicated(t_node *l_a);
void		rotate_reverse_a(t_node **l_a);
void		ft_init_params(t_params *p);
void		check_if_valid(char *str);
void		duplicate_error(int n);
void		rotate_a(t_node **l_a);
void		swap_a(t_node **l_a);
void		malloc_error(int n);
void		simple_error(int n);
void		sorted_error(int n);
void		alpha_error(int n);
void		swap_b(t_node **l_b);
void		rotate_b(t_node **l_b);
void		sort_stack(t_node **l_a);
void		is_list_alpha(char *str);
void		printlist(t_node **start);
void		rotate_reverse_b(t_node **l_b);
void		ft_lstadd_front(t_node **lst, t_node *new);
void		small_first(t_node **l_a, int pos, int size);
int			get_big_position(t_node *head, int size, int comp);
void		push_to_a(t_node **l_a, t_node **l_b, t_params *p);
int			get_small_position(t_node *head, int size, int comp);
int			ft_strlen(const char *str);
int			ft_lstsize(t_node *lst);
#endif