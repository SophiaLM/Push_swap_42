NAME = push_swap

LIB = ar rcs

CFLAGS = -Wall -Werror -Wextra

CC = cc

RM = rm -f

PASTEL_PINK = \033[38;5;218m

STRONG_PINK = \033[38;5;204m

LILAC = \033[38;5;141m

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
	./movements/rotate_both.c \

OBJ = $(SRC:%.c=%.o)

all: $(NAME) compilacion_completa

$(NAME): $(OBJ)
	@echo "$(PASTEL_PINK)creating $(STRONG_PINK)$(OBJ)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	@echo "$(PASTEL_PINK)compiling $(STRONG_PINK)$<..."
	@$(CC) $(CFLAGS) -c $^ -o $@

compilacion_completa:
	@echo "$(LILAC)¡Program ready to be executed!(˶˃ ᵕ ˂˶)✔"

clean: 
	@echo "$(PASTEL_PINK)Successfully removed object file $(STRONG_PINK)(,,>﹏<,,)"
	@$(RM) $(OBJ)

fclean: clean
	@echo "$(PASTEL_PINK)Full cleanup completed $(STRONG_PINK)૮₍ ˃ ⤙ ˂ ₎ა"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
