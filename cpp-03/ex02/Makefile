SRC_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	c++ -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ_FILES)


fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)