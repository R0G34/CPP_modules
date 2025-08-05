SRC = *.cpp
NAME = weapon
CC = c++ -Wall -Wextra -Werror -str=c++98

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(SRC) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean:	clean

re: fclean all