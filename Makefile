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

CFLAGS = -Werror -Wall -Wextra -I$(INC)

NAME = libftprintf.a

HEADER := ft_printf.h libft.h
INC = include/

HEADER := $(addprefix $(INC), $(HEADER))

PRINTF_FILES = ft_printf ft_printf_char \
	ft_printf_hex ft_printf_int ft_printf_pointer \
	ft_printf_string ft_printf_udec ft_printf_util

PRINTF_SRCS = $(addsuffix .c,$(PRINTF_FILES))

LIBFT_DIR = libft/

LIBFT = $(LIBFT_DIR)libft.a

all: $(NAME)

print:
	echo $(HEADER) $(PRINTF_SRCS)

$(NAME): $(LIBFT) $(PRINTF_SRCS:.c=.o) $(HEADER)
	$(CC) $(CFLAGS) -c $(PRINTF_SRCS)
	@ar rcs $(NAME) $(PRINTF_SRCS:.c=.o)

$(LIBFT):
	$(MAKE) -C libft

clean:
	@rm -f $(PRINTF_SRCS:.c=.o)
	@cd $(LIBFT_DIR) && $(MAKE) clean

fclean: clean
	@rm -f $(NAME) $(PRINTF_SRCS:.c=.o) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re