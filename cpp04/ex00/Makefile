CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf
NAME = main

FILES = Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Animal.cpp main.cpp

all:$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

clean:
	$(RM) $(NAME)