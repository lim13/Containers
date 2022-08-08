NAME = test

SRCS = test.cpp test_iterator_traits.cpp
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

TEST_HEADERS = test.hpp
PROJECT_HEADERS = ft_iterator.hpp
PROJECT_DIR = $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))/..))
PROJECT_HEADERS_PATH = $(addprefix $(PROJECT_DIR)/, $(PROJECT_HEADERS))

CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++11
RM = rm -rf

# all:
# 	echo $(OBJS)
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -I $(PROJECT_DIR) $(OBJS) -o $(NAME)

%.o: %.cpp $(TEST_HEADERS) $(PROJECT_HEADERS_PATH) Makefile
	$(CC) $(FLAGS) -I $(PROJECT_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

