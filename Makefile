NAME = push_swap
CFLAGS = -Wall -Werror -Wextra -g
FILES = $(shell find src -type f -name "*.c")
LIBFT = include/bin/libft.a
OBJ = $(FILES:.c=.o)

all :$(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	@gcc $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)

src/%.o : src/%.c
	gcc $(FLAGS) -c $< -o $@

$(LIBFT):
	make -C include

clean:
	@rm -f $(OBJ)
	make -C include clean

fclean:
	@rm -f $(NAME) $(OBJ)
	make -C include clean

re: fclean all

.PHONY: re all fclean clean