NAME = phonebook
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp contact.class.cpp phone_utils.cpp
OBJ = $(SRCS:.cpp=.o)
CC = g++

%.o:%.cpp 
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re: fclean all
