# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 14:08:11 by kyung-ki          #+#    #+#              #
#    Updated: 2024/04/05 14:24:25 by kyung-ki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = c++
CFLAGS = -Werror -Wall -Wextra -std=c++98
OBJDIR = obj
FILES = main

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/, $(FILES:=.o))
#HEADER = Zombie.hpp

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