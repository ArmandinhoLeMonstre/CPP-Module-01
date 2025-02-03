NAME = Zombie01
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3 

RM = rm -rf

OBJ = main.cpp zombieHorde.cpp Zombie.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING Zombie01...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Zombie01 created\n"

clean :
	$(RM) Zombie01

fclean : clean
	$(RM) Zombie01

re : fclean all