CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = sedforlosers

SRC = main.cpp find.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
			$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp sedforlosers.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all