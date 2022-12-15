CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = phonebook

FILES = main.cpp phonebook.cpp contacts.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) main.cpp

clean:
	$(RM) $(NAME)