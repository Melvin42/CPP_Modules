NAME = BraiiiiiiinnnzzzZ

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

OBJ = ${SRC:.cpp=.o}

DEP = ${OBJ:.o=.d}

-include $(DEP)

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
	rm -f $(DEP)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re .cpp.o
