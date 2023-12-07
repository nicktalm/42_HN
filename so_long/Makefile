NAME = so_long
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
SRCS = so_long.c \
		check_map_1.c \
		check_map_2.c \
		check_map.c \
		error.c \
		movement.c \
		graphic.c \
		helper_2.c \
		helper.c
OBJS = $(SRCS:.c=.o)
LIBFT = lib/libft
PRINTF = lib/printf
GET_NEXT = lib/get_next_line
MLX = lib/libmlx
INLIBFT = -L $(LIBFT) -lft
INPRINF = -L $(PRINTF) -lftprintf
INGET_NEXT = -L $(GET_NEXT) -lget_next_line
INMLX = -L $(MLX)/build -lmlx42 -ldl -lglfw -pthread -lm
$(NAME):		$(OBJS)
				make -C $(LIBFT)
				make -C $(PRINTF)
				make -C $(GET_NEXT)
				cmake $(MLX) -B $(MLX)/build && make -C $(MLX)/build -j4
				cc $(OBJS) $(INLIBFT) $(INPRINF) $(INGET_NEXT) $(INMLX) -framework Cocoa -framework OpenGL -framework IOKit -o $(NAME) $(CFLAGS)
all:		$(NAME)
%.o:%.c
				cc ${CFLAGS} -c $< -o $@
clean:
				rm -f $(OBJS)
				@cd $(LIBFT) && $(MAKE) clean
				@cd $(PRINTF) && $(MAKE) clean
				@cd $(GET_NEXT) && $(MAKE) clean
				@rm -rf $(MLX)/build
fclean:		clean
				rm -f $(NAME)
				@cd $(LIBFT) && $(MAKE) fclean
				@cd $(PRINTF) && $(MAKE) fclean
				@cd $(GET_NEXT) && $(MAKE) fclean
re: fclean all
.PHONY: all clean fclean re