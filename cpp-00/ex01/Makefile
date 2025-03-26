SRC_FILES = main.cpp PhoneBook.cpp Contact.cpp  utils.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = PhoneBook
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.cpp Contact.hpp PhoneBook.hpp utils.hpp
	c++ -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ_FILES)


fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)