NAME = push_swap
LIBFT = Libft/libft.a
SRCS =	push_swap.c \
		srcs/moves.c \
		srcs/utils.c \
		srcs/ft_parse.c \
		srcs/collect_and_convert.c \
		srcs/divide.c \
		srcs/setup_groups.c \
		srcs/create_group.c \
		
		
CFLAGS = -Wall -Werror -Wextra -g
OBJS = $(SRCS:.c=.o)

$(NAME) :	$(OBJS)
	make bonus -C ./Libft
	gcc $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

all :	$(NAME)

clean :
	make clean -C ./Libft
	rm -rf *.o */*.o

fclean :
	make fclean -C ./Libft
	rm -rf *.o */*.o
	rm -rf $(NAME)

re :	fclean all

.PHONY : all clean fclean re