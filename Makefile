NAME	=	3DCursiveHierarchy

CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

FILES	=	src/main.cpp	src/Circle.cpp	src/FirstDerivative.cpp	src/Point.cpp \
			src/Elipce.cpp	src/Helix.cpp	

			
OBJS	=	$(FILES:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)  

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re