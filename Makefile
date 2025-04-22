NAME = push_swap

LIB = ar rcs

CFLAGS = -Wall -Werror -Wextra

CC = cc

RM = rm -f

SRC = ./main/push_swap.c \
	./main/sort_stacks.c \
	./main/sort_three.c \
	./utils/find_node.c \
	./utils/ft_lstcreated.c \
	./utils/ft_lstlen.c \
	./utils/ft_lstnew.c \
	./utils/init_nodes_a.c \
	./utils/init_nodes_b.c \
	./utils/parcing.c \
	./utils/stack_init.c \
	./movements/push.c \
	./movements/reverse.c \
	./movements/reverse_rotate.c \
	./movements/swap.c \

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
