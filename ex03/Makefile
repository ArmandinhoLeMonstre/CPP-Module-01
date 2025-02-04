NAME = Humans
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3 

RM = rm -rf

OBJ = main.cpp Weapon.hpp Weapon.cpp HumanA.hpp HumanA.cpp HumanB.hpp HumanB.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING Humans...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Humans created\n"

clean :
	$(RM) Humans

fclean : clean
	$(RM) Humans

re : fclean all