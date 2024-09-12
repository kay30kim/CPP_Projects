NAME	=	Zombie

CC		=	c++
CFLAGS	=	-Werror -Wall -Wextra -std=c++98
OBJDIR	=	obj
FILES	=	main Zombie newZombie randomChump

SRC		=	$(FILES:=.cpp)
OBJ		=	$(addprefix $(OBJDIR)/, $(FILES=.o))
HEADER	=	Zombie.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o : %.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re