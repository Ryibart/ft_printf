# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 16:52:06 by rtammi            #+#    #+#              #
#    Updated: 2024/05/08 16:22:14 by rtammi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= cc

CFLAGS		+= -Wall -Wextra -Werror -I ./libft

DEPSFLAGS	+= -MMD -MP

AR			= ar rcs

RM			= rm -f

LIBFT 		= ./libft

SRCS		= 								\
			ft_printf.c						\
			utilities.c 					\
			print_functions/print_char.c	\
			print_functions/print_hex.c		\
			print_functions/print_nbr.c		\
			print_functions/print_ptr.c		\
			print_functions/print_str.c		\
			print_functions/print_uint.c	\

OBJS		= $(SRCS:.c=.o)

DEPS		= $(SRCS:.c=.d)

all:		$(NAME)
			$(MAKE) -C $(LIBFT)

libft	:
			$(MAKE) -C $(LIBFT)

$(NAME): $(OBJS) libft
	cp $(LIBFT)/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(DEPSFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	$(RM) $(OBJS) $(DEPS)
	$(MAKE) -C $(LIBFT) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT) fclean
	
re: fclean all

redeps:
	touch $(DEPS)
	make
	$(MAKE) -C $(LIBFT) redeps

.PHONY: all clean fclean re redeps libft
