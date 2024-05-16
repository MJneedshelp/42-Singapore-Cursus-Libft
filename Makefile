# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 22:10:59 by mintan            #+#    #+#              #
#    Updated: 2024/05/16 15:30:45 by mintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler + compile flags 
CC = cc
CFLAGS = -Wall -Werror -Wextra -c

# Definitions
LIBRARY = libft.a
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

# Target to make using Make all
all: $(LIBRARY)

# Rule to create the LIBRARY
# r > add specified files into ar | c > create archive| s > write index to ar
# "@" > Target | "^" > Prerequisites
$(LIBRARY): $(OBJECTS)
	echo "making the library now"
	ar rcs $@ $^

# Rule to create the OBJECTS
# "<" > Prerequisites
%.o: %.c
	echo "making object files now"
	$(CC) $(CFLAGS) $< -o $@

# Clear the build files	
clean:
	rm -f $(LIBRARY) $(OBJECTS)

# Phony targets
.PHONY: all clean


