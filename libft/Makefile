# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 15:27:30 by djagusch          #+#    #+#              #
#    Updated: 2022/12/01 10:33:05 by djagusch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Werror -Wall -Wextra

NAME = libft.a

HEADER = libft.h

FILES = ft_atoi ft_bzero ft_calloc ft_isalnum \
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
	ft_putendl ft_putnbr ft_putstr ft_dectobase_str\

SRCS = $(addsuffix .c,$(FILES))

all: $(NAME)

$(NAME): $(SRCS) $(SRCS:.c=.o)
	@$(CC) -c $(SRCS) $(CFLAGS) -I $(HEADER)
	@ar rc $(NAME) $(SRCS:.c=.o)

clean:
	@rm -f $(SRCS:.c=.o)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re