# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 12:55:36 by ayassir           #+#    #+#              #
#    Updated: 2022/06/24 09:49:50 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker

SRC_M		=	checker.c utils_libft_bonus.c errors_bonus.c operations_bonus.c 1_functions_bonus.c\
				sorting_functions_bonus.c 2_functions_bonus.c 2_operations_bonus.c 3_functions_bonus.c\
				3_operations_bonus.c\

PRINTF		=	../ft_printf/libftprintf.a
PRINTF_DIR	=	../ft_printf/

LIBFT		=	../libft/libft.a
LIBFT_DIR	=	../libft/

CFLAGS		=	-Wall -Wextra -Werror

HEADER		=	../includes/checker.h

RM			=	rm -rf

red			=	`tput setaf 1`
green		=	`tput setaf 2`
white		=	`tput setaf 7`

OBJ_M = $(SRC_M:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ_M) $(PRINTF) $(LIBFT)
	@$(CC) $(CFLAGS) $^ -o $(NAME)

%.o : SRC_M/%.c $(HEADER)
	@$(CC) $(CFLAGS) -c $<
	
$(PRINTF):
	@$(MAKE) -C $(PRINTF_DIR)
	
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@$(RM) $(OBJ_M)
	
fclean: clean
	@$(MAKE) fclean -C $(PRINTF_DIR)
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)
	
re: fclean all

mandatory:	$(NAME)
bonus:		$(NAME_BONUS)

m:			mandatory
b:			bonus

.PHONY: all clean fclean re mandatory m bonus b