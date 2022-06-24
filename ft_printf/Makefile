# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 10:51:45 by ayassir           #+#    #+#              #
#    Updated: 2022/06/24 09:43:20 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_puthex.c ft_puthexx.c ft_putnbr.c ft_putstr.c \
			ft_putchar.c ft_putptr.c ft_printf.c ft_putuns.c \

NAME	=	libftprintf.a

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

.PHONY: all clean fclean re mandatory m bonus b