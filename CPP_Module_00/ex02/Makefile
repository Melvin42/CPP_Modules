NAME = GlobalBanksters

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

SRC = Account.cpp tests.cpp

OBJ = ${SRC:.cpp=.o}

DEP = ${OBJ:.o=.d}

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

-include $(DEP)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
	rm -f $(DEP)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re .cpp.o
