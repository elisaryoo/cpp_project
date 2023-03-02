CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf
NAME = zombie

FILES = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

all:$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

clean:
	$(RM) $(NAME)