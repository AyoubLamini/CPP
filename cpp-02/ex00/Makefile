SRC_FILES = main.cpp Fixed.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.cpp Fixed.hpp
	c++ -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ_FILES)


fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)