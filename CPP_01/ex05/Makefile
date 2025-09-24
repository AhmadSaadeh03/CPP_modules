CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Harl

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
			$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Harl.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all