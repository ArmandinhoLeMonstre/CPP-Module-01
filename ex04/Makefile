NAME = Files
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3 

RM = rm -rf

OBJ = main.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING Files...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Files created\n"

clean :
	$(RM) Files

fclean : clean
	$(RM) Files

re : fclean all