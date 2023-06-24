NAME = 3DCursiveHierarchy
LIBNAME = lib${NAME}.so
BONUS_NAME = 3DCursiveHierarchy_bonus
MAIN_PATH = src/main.cpp
LIB_PATH = .

CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FILES = src/main.cpp src/Circle.cpp src/FirstDerivative.cpp src/Point.cpp \
        src/Elipce.cpp src/Helix.cpp

OBJS = $(FILES:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBNAME) $(BONUS_NAME)

re: fclean all

bonus: $(OBJS)
	$(CC) $(OBJS) -shared -o $(LIBNAME)
	$(CC) $(MAIN_PATH) -L$(LIB_PATH) -l$(NAME) -o $(BONUS_NAME)

.PHONY: all clean fclean re bonus
