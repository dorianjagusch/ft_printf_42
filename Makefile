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

HEADER = printf.h

PRINTF = printf.a
PRINTF_FILES = ft_printf ft_printf_char \
	ft_printf_hex ft_printf_int ft_printf_pointer \
	ft_printf_string ft_printf_udec ft_printf_util
PRINTF_SRCS = $(addsuffix .c,$(PRINTF_FILES))

LIBFT_DIR = libft/
LIBFT = libft.a
LIBFT_FILES = ft_atoi ft_bzero ft_calloc ft_isalnum \
	ft_isalpha ft_isascii ft_isdigit ft_isprint \
	ft_itoa ft_memchr ft_memcmp ft_memcpy \
	ft_memmove ft_memset ft_putchar_fd \
	ft_putendl_fd ft_putnbr_fd ft_putstr_fd \
	ft_split ft_strchr ft_strdup ft_striteri \
	ft_strjoin ft_strlcat ft_strlcpy ft_strlen \
	ft_strmapi ft_strncmp ft_strnstr ft_strrchr \
	ft_strtrim ft_substr ft_tolower ft_toupper \
	ft_lstadd_back ft_lstadd_front ft_lstclear \
	ft_lstdelone ft_lstiter ft_lstlast ft_lstmap \
	ft_lstnew ft_lstsize ft_min ft_max ft_putchar \
	ft_putendl ft_putnbr ft_putstr ft_dectobase_str
LIBFT_SRCS= $(addprefix $(LIBFT_DIR),$(addsuffix .c,$(LIBFT_FILES)))

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF)
	ar rcs $(NAME) $(LIBFT) $(PRINTF)
	ranlib $(NAME)

$(PRINTF): $(LIBFT_SRCS) $(LIBFT_SRCS:.c=.o) $(PRINTF_SRCS) $(PRINTF_SRCS:.c=.o)
	$(CC) -c $(PRINTF_SRCS) $(CFLAGS) -I $(HEADER)
	ar rc $(PRINTF) $(PRINTF_SRCS:.c=.o)

$(LIBFT): $(LIBFT_SRCS) $(LIBFT_SRCS:.c=.o)
	cd $(LIBFT_DIR) && make all

clean:
	rm -f $(PRINTF_SRCS:.c=.o)
	cd $(LIBFT_DIR) && make clean

fclean: clean
	rm -f $(NAME) $(PRINTF)
	cd $(LIBFT_DIR) && make fclean

re: fclean all

.PHONY: all clean fclean re