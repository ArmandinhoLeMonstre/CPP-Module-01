NAME = Zombie00
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

OBJ = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING Zombie00...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Zombie00 created\n"

clean :
	$(RM) Zombie00

fclean : clean
	$(RM) Zombie00

re : fclean all