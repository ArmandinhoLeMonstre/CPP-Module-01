NAME = Humans
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3 #-fsanitize=address -g

RM = rm -rf

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDE = -I HumanA.hpp -I HumanB.hpp -I Weapon.hpp 

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;33m\nCOMPILING Humans...\n"
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)
	@echo "\033[1;32m./Humans created\n"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) Humans

re: fclean all