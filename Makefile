# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 11:40:52 by bargarci          #+#    #+#              #
#    Updated: 2023/08/29 07:41:17 by bargarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
SRCS		= push_swap.c push_swap_utils.c index_list.c order_stack.c errors.c sort_low_arguments.c movs_single.c movs_double.c
OBJS		= $(SRCS:.c=.o)
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -rf
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a
PRINTF_DIR	= ft_printf
PRINTF		= $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

lib: $(LIBFT)
printf: $(PRINTF)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRCS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	make bonus -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

%.o: %.c $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS) push_swap.dSYM
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(PRINTF_DIR)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(PRINTF_DIR)
	$(RM) $(NAME)

re: fclean all
#	$(MAKE) re -C $(LIBFT_DIR)
#	$(MAKE) re -C $(PRINTF_DIR)

.PHONY: all clean fclean re lib printf new
