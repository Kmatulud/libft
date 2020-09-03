NAME = push_swap.a

SRC = checker.c \
      exc_instruction.c \
      exc_rr.c \
      exc_rrr.c \
      get_next_line.c \
      help_sort.c \
      instructions.c \
      is_sort.c \
      least_moves_betweenA_B.c \
      instructions2.c \
      instructions3.c \
      push_swap.c \
      rot_find.c \
      sort.c \
      sort_large.c \
      stacks.c \
      check_if_dup.c

SRCO = checker.o \
      exc_instruction.o \
      exc_rr.o \
      exc_rrr.o \
      get_next_line.o \
      help_sort.o \
      instructions.o \
      is_sort.o \
      least_moves_betweenA_B.o \
      instructions2.o \
      instructions3.o \
      push_swap.o \
      rot_find.o \
      sort.o \
      sort_large.o \
      stacks.o \
      check_if_dup.o

CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME):
	make -C libft
	@gcc -c -g $(CFLAGS) $(SRC)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)
	@gcc checker.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o checker
	@gcc push_swap.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o push_swap
	rm -f $(NAME)

clean:
	make clean -C libft
	rm -f $(SRCO)

fclean: clean
	make fclean -C libft
	rm -f checker push_swap

re: fclean all

.PHONY: all clean fclean 