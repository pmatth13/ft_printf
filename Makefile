# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/21 23:10:00 by psaudell          #+#    #+#              #
#    Updated: 2026/10/21 23:10:00 by psaudell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = ft_printf.c \
		ft_conversion.c \
		ft_putchar_pf.c \
		ft_putstr_pf.c \
		ft_putnbr_pf.c \
		ft_base_pf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

# on part d'une copie de libft.a puis on y ajoute nos .o
$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
