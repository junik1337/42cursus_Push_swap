/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:20:00 by ayassir           #+#    #+#             */
/*   Updated: 2022/05/18 15:23:42 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define FT_INT_MIN -2147483648
# define FT_INT_MAX 2147483647

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_list
{
	int				*content;
	struct s_list	*next;
}					t_list;

typedef struct node {
	int						data;
	struct node				*next;
}			t_node;

size_t		ft_strlen(const char *s);
void		ft_lstadd_front(t_node **lst, t_node *new);
void		ft_lstadd_back(t_node **lst, t_node *new);
void		ft_lstdelone(t_node *lst, void (*del)(int));
void		ft_lstclear(t_node **lst, void (*del)(int));
void		ft_lstiter(t_node *lst, void (*f)(int));
long		ft_atoi(const char *str);
int			ft_lstsize(t_node *lst);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
//char		*ft_itoa(int n);
t_node		*ft_lstnew(int content);
t_node		*ft_lstlast(t_node *lst);
t_node		*ft_lstmap(t_node *lst, int (*f)(int), void (*del)(int));
char		*ft_substr(char const *s, unsigned int start, size_t len);
#endif
