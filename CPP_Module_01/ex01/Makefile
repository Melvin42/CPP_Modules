NAME = moreBrainz

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = ${SRC:.cpp=.o}

DEP = ${OBJ:.o=.d}

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

-include $(DEP)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) $(DEP)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re .cpp.o
