NAME = push_swap.a
CFLAGS = -Wall -Werror -Wextra
FILES =

OBJ = $(FILES:.c=.o)

all :$(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ) : $(FILES)
	@gcc $(FLAGS) -c $(FILES)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: re all fclean clean