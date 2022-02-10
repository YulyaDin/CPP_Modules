NAME := megaphone
CC := clang++
FLAGS := -Wall -Wextra -Werror

OBJ_DIR := obj

SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)
DEP := $(OBJ:.o=.d)

DEPS := $(addprefix $(OBJ_DIR)/, $(DEP))
OBJS := $(addprefix $(OBJ_DIR)/, $(OBJ))

all: $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

-include $(OBJS:.o=.d)

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $< -MMD

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJS)
	@rm -rf $(DEPS)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
