SRC_FILES = main.cpp RPN.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = RPN
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES) RPN.hpp
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.cpp 
	c++ -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ_FILES)


fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)