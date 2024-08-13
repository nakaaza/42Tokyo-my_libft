NAME	= libft.a
SRCS	:= $(shell find . -name '*.c')
OBJ_DIR	= obj
OBJS	:= $(patsubst %.c,$(OBJ_DIR)/%.o,$(notdir $(SRCS)))
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): obj
	ar -rc $(NAME) $(OBJS)

obj: 
	mkdir -p $(OBJ_DIR)
	$(foreach src, $(SRCS), $(shell $(CC) $(CFLAGS) -c $(src) -o $(OBJ_DIR)/$($(notdir $(src)):.c=.o)))

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
