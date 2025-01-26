SRC_FILES = megaphone.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = megaphone
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)

%.o : %.c 
	c++ -c $(CFLAGS) $< -o $@

clean:
				$(RM) $(OBJ_FILES)


fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)