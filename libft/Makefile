# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 17:29:02 by ayassir           #+#    #+#              #
#    Updated: 2022/06/24 09:46:29 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	ft_strchr.c ft_strlen.c ft_strrchr.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c ft_split.c ft_substr.c\
		

NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -crs $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c $^

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus