# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math <math@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 18:22:45 by math42            #+#    #+#              #
#    Updated: 2024/06/25 06:26:27 by math             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex
SRCSDIR     = .
INCLUDES    = .
OBJDIR      = .obj

SRCS        = $(wildcard $(SRCSDIR)/*.cpp)
OBJS        = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	find . -name "*.o" -exec rm -f {} +
	rm -rf $(NAME)
	

re: fclean all

.PHONY: all clean fclean re test
