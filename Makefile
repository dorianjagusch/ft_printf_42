# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 13:27:44 by djagusch          #+#    #+#              #
#    Updated: 2022/11/15 14:51:13 by djagusch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Werror -Wall -Wextra

NAME = libftprintf.a

HEADER = ft_printf.h libft/include/libft.h

PRINTF_FILES = ft_printf ft_printf_char \
	ft_printf_hex ft_printf_int ft_printf_pointer \
	ft_printf_string ft_printf_udec ft_printf_util

PRINTF_SRCS = $(addsuffix .c,$(PRINTF_FILES))

LIBFT_DIR = libft/

LIBFT = $(LIBFT_DIR)libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF_SRCS:.c=.o)
	@cp $(LIBFT) $@
	$(CC) $(CFLAGS) -c $(PRINTF_SRCS) -I $(HEADER)
	@ar rcs $(NAME) $(PRINTF_SRCS:.c=.o)

$(LIBFT):
	@cd $(LIBFT_DIR) && $(MAKE)

clean:
	@rm -f $(PRINTF_SRCS:.c=.o)
	@cd $(LIBFT_DIR) && $(MAKE) clean

fclean: clean
	@rm -f $(NAME) $(PRINTF_SRCS:.c=.o) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re