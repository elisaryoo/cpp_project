CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = phonebook

FILES = PhoneBook.cpp Contact.cpp main.cpp 

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

clean:
	$(RM) $(NAME)