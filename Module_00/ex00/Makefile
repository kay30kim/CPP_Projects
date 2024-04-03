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

NAME	= megaphone
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) megaphone.cpp -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re : fcelan all

.PHONY: all clean fclean re