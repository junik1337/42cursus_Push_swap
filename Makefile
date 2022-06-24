# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 14:16:59 by ayassir           #+#    #+#              #
#    Updated: 2022/06/24 09:48:51 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRC_M		=	push_swap.c srcs/utils_libft.c srcs/errors.c srcs/1_operations.c srcs/1_functions.c\
				srcs/sorting_functions.c srcs/2_functions.c srcs/2_operations.c srcs/3_functions.c\
				srcs/3_operations.c\

PRINTF		=	ft_printf/libftprintf.a
PRINTF_DIR	=	ft_printf/

LIBFT		=	libft/libft.a
LIBFT_DIR	=	libft/

CFLAGS		=	-Wall -Wextra -Werror

HEADER		=	includes/push_swap.h

RM			=	rm -rf

#__________Colors_________

WHITE		:=	\033[m
RED			:=	\033[1;31m
GREEN		:=	\033[1;32m
YELLOW		:=	\033[1;33m
BLUE		:=	\033[1;34m
PURPLE		:=	\033[1;35m
CYAN		:=	\033[1;36m

OBJ_M = $(SRC_M:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ_M) $(PRINTF) $(LIBFT)
	@echo "\n$(YELLOW)Building    $(YELLOW)->\t/$(CYAN)$(NAME)$(WHITE)\n"
	@$(CC) $(CFLAGS) $^ -o $(NAME)

%.o : SRC_M/%.c $(HEADER)
	@echo "$(GREEN)Compiling   $(YELLOW)->\t/$(shell basename $<)$(WHITE)"
	@$(CC) $(CFLAGS) -c $<
	
$(PRINTF):
	@$(MAKE) -C $(PRINTF_DIR)
	
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@echo "\n$(RED)removing    $(YELLOW)->\t/$(CYAN)$(OBJ_M)$(WHITE)"
	@$(RM) $(OBJ_M)
	
fclean: clean
	@echo "$(RED)removing    $(YELLOW)->\t/$(CYAN)$(NAME)$(WHITE)\n"
	@$(MAKE) fclean -C $(PRINTF_DIR)
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)
	
re: fclean all

mandatory:	$(NAME)
bonus:		$(NAME_BONUS)

m:			mandatory
b:			bonus

.PHONY: all clean fclean re mandatory m bonus b