SRCS = main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\

NAME = ex00

FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME): $(SRCS)
	clang++ $(SRCS) $(FLAGS) -o $(NAME)

clean :
	rm -Rf $(NAME)

fclean : clean

re: fclean all