src = Contact.cpp main.cpp
obj = $(src:.cpp=.o)
NAME = output
COMPLIE = c++ -Wall -Wextra -Werror


%.o : %.cpp
	$(COMPLIE) -c $< -o $@


$(NAME) : $(obj)
	$(COMPLIE) $(obj) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(obj)

fclean : clean
	rm -f $(NAME)

re : fclean all

