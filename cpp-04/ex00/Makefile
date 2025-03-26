SRC_FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES) Cat.hpp Dog.hpp Animal.hpp WrongAnimal.hpp WrongCat.cpp
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.cpp 
	c++ -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ_FILES)


fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)