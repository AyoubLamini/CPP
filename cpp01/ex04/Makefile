SRC_FILES = main.cpp Sed.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = my_Sed
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES) Sed.hpp
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.cpp 
	c++ -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ_FILES)


fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)