# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 22:10:59 by mintan            #+#    #+#              #
#    Updated: 2024/05/28 19:15:43 by mintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler + compile flags 
CC = cc
CFLAGS = -Wall -Werror -Wextra -c

# Definitions
NAME = libft.a
SOURCES = $(filter-out ft_lst%.c, $(wildcard *.c))
BONUSSRCS = $(wildcard ft_lst*.c)
OBJECTS = $(SOURCES:.c=.o)
BONUSOBJS = $(BONUSSRCS:.c=.o)


# Target to make using Make all
all: $(NAME)

# Target to make using Make bonus
bonus: $(BONUSOBJS)
	ar rcs $(NAME) $^

# Rule to create the LIBRARY
# r > add specified files into ar | c > create archive| s > write index to ar
# "@" > Target | "^" > Prerequisites
$(NAME): $(OBJECTS)
	echo "making the library now"
	ar rcs $@ $^

# Rule to create the OBJECTS
# "<" > Prerequisites

%.o: %.c
	echo "making object files now"
	$(CC) $(CFLAGS) $< -o $@

# Clear the build files	
clean:
	rm -f $(OBJECTS) $(BONUSOBJS)

fclean: clean
	rm -f $(NAME)

# Rule to rebuild the target
re:	fclean all

# Phony targets
.PHONY: all clean re
