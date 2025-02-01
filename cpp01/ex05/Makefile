SRC_FILES = main.cpp Harl.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = Harl
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES) 
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.cpp Harl.hpp
	c++ -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ_FILES)


fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)