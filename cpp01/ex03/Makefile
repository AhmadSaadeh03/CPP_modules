CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = violence

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
			$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp 
	$(CPP) $(FLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all