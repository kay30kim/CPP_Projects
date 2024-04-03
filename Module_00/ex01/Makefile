# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#  By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+           #
#                                                +#+#+#+#+#+   +#+             #
#   Created: 2024/01/09 11:57:15 by kyung-ki          #+#    #+#               #
#   Updated: 2024/03/30 10:19:41 by kyung-ki         ###   ########.fr         #
#                                                                              #
# **************************************************************************** #

NAME	= ex01
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror

FILES	= Contact PhoneBook main
SRCS	= $(FILES:=.cpp)
OBJS	= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER	= Contact.hpp PhoneBook.hpp
OBJDIR	= obj

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CC) $(OBJS) -o $(NAME)
#$(CC) $(CFLAGS) $E(SRCS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(NAME) $(OBJDIR)

fclean : clean

re : fclean all

.PHONY : all clean fclean re