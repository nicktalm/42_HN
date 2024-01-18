NAME = push_swap
CFLAGS = -g
SRCS = src/push_swap.c \
		src/operation_rotate.c \
		src/operation_r_rotate.c \
		src/operation_swap_push.c \
		src/list_func.c \
		src/a_to_b.c \
		src/b_to_a.c \
		src/sort_stack.c \
		src/sort_stack_2.c \
		src/helper.c \
		src/helper_2.c \
		src/error.c \
		src/checks.c \
		src/parsing.c
OBJS = $(SRCS:.c=.o)
LIBFT = lib/libft
PRINTF = lib/printf
INLIBFT = -L $(LIBFT) -lft
INPRINF = -L $(PRINTF) -lftprintf
$(NAME):		$(OBJS)
				@cd $(PRINTF) && $(MAKE) all
				@cd $(LIBFT) && $(MAKE) all
				@cd $(LIBFT) && $(MAKE) bonus
				cc $(OBJS) $(INLIBFT) $(INPRINF) -framework Cocoa -framework OpenGL -framework IOKit -o $(NAME) $(CFLAGS)

all:		$(NAME)

%.o:%.c
				cc ${CFLAGS} -c $< -o $@

clean:
				rm -f $(OBJS)
				@cd $(LIBFT) && $(MAKE) clean
				@cd $(PRINTF) && $(MAKE) clean

fclean:		clean
				rm -f $(NAME)
				@cd $(LIBFT) && $(MAKE) fclean
				@cd $(PRINTF) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re