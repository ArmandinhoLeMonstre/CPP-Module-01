NAME = ref_n_ptr
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3 

RM = rm -rf

OBJ = main.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING ref_n_ptr...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./ref_n_ptr created\n"

clean :
	$(RM) ref_n_ptr

fclean : clean
	$(RM) ref_n_ptr

re : fclean all
