CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = brain

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp 
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re