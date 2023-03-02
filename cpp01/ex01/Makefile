CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf
NAME = zombie

FILES = Zombie.cpp zombieHorde.cpp main.cpp

all:$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

clean:
	$(RM) $(NAME)