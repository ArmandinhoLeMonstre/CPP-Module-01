NAME = Harl2.0
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3 

RM = rm -rf

OBJ = main.cpp Harl.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING Harl2.0...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Harl2.0 created\n"

clean :
	$(RM) Harl2.0

fclean : clean
	$(RM) Harl2.0

re : fclean all