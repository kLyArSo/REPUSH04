SRCS = main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp\

NAME = ex01

FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME): $(SRCS)
	clang++ $(SRCS) $(FLAGS) -o $(NAME)

clean :
	rm -Rf $(NAME)

fclean : clean

re: fclean all