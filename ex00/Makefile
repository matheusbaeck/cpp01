# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math42 <math42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 18:22:37 by math42            #+#    #+#              #
#    Updated: 2023/09/04 18:48:03 by math42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and Names
NAME		= zombie
SRCSDIR		= .
INCLUDES	= .

SRCS		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

# Compiler options
CC			= c++
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
