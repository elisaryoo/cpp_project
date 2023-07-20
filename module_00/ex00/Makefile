CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = megaphone

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) megaphone.cpp

run:
	./megaphone  Damnit " ! " "Sorry students, I thought this thing was off."

clean:
	$(RM) $(NAME)
