# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 14:32:37 by kyung-ki          #+#    #+#              #
#    Updated: 2024/04/05 16:32:48 by kyung-ki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04

CC = c++
CFLAGS = -Werror -Wall -Wextra -std=c++98
OBJDIR = obj
FILES = Copy main

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER = Copy.hpp

all :$(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o : %.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re	