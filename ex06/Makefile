# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math <math@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 18:22:45 by math42            #+#    #+#              #
#    Updated: 2024/05/10 04:40:09 by math             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and Names
NAME		= harlFilter
SRCSDIR		= .
INCLUDES	= .

SRCS		= main.cpp Harl.cpp

# Compiler options
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re test
