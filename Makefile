NAME	=	3DCursiveHierarchy

CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

FILES	=	
			
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