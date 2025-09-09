CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp contact.cpp PhoneBook.cpp

NAME = phonebook

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp include/PhoneBook.hpp include/contact.hpp
	$(CPP) $(FLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
