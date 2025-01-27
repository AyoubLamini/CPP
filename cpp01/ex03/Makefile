SRC_FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = War
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	c++ -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ_FILES)


fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)