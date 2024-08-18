NAME	= libft.a

CTYPE	= ft_isalnum ft_isalpha ft_isascii ft_isdigit \
			ft_isprint ft_tolower ft_toupper
LST		= ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
			ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize
PUT_FD	= ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd
STDIO	= ft_printf
STDIO/PRINTF	= ft_chars_to_str ft_check_flags ft_nbrs_to_str \
					ft_parse_format ft_print_chars ft_print_format \
					ft_ptrs_to_str ft_set_flags ft_update_format
STDLIB	= ft_atoi ft_calloc ft_itoa
STRING	= ft_bzero ft_memchr ft_memcmp ft_memcpy ft_memmove \
			ft_memset ft_split ft_strchr ft_strdup ft_striteri \
			ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strmapi \
			ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr

CTYPE_SRC	= $(addprefix ft_ctype/, $(addsuffix .c, $(CTYPE)))
LST_SRC		= $(addprefix ft_lst/, $(addsuffix .c, $(LST)))
PUT_FD_SRC	= $(addprefix ft_put_fd/, $(addsuffix .c, $(PUT_FD)))
STDIO_SRC	= $(addprefix ft_stdio/, $(addsuffix .c, $(STDIO))) \
				$(addprefix ft_stdio/ft_printf/, $(addsuffix .c, $(STDIO/PRINTF)))
STDLIB_SRC	= $(addprefix ft_stdlib/, $(addsuffix .c, $(STDLIB)))
STRING_SRC	= $(addprefix ft_string/, $(addsuffix .c, $(STRING)))
ALL_SRCS	= $(CTYPE_SRC) $(LST_SRC) $(PUT_FD_SRC) $(STDIO_SRC) $(STDLIB_SRC) $(STRING_SRC)

OBJ_DIR	= obj
OBJS	= $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(CTYPE) $(LST) $(PUT_FD) $(STDIO) $(STDIO/PRINTF) $(STDLIB) $(STRING)))

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: $(NAME)

$(NAME): objs
	@echo "\n$(GREEN)Compiling $(NAME) ...$(DEF_COLOR)"
	ar -rc $(NAME) $(OBJS)

define compile_src
	@make $(patsubst %.c,$(OBJ_DIR)/%.o,$(notdir $(1))) SRC=$(1)

endef

objs:
	@echo "\n$(GREEN)Compiling src files ...$(DEF_COLOR)"
	$(foreach src,$(ALL_SRCS),$(call compile_src,$(src)))
	@touch objs

$(OBJ_DIR)/%.o: 
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $(SRC) -o $@

clean:
	@echo "\n$(YELLOW)Cleaning object files ...$(DEF_COLOR)"
	$(RM) -r $(OBJ_DIR)
	$(RM) objs

fclean: clean
	@echo "\n$(YELLOW)Cleaning $(NAME) ...$(DEF_COLOR)"
	$(RM) $(NAME)

re: fclean all

 
# Colors
DEF_COLOR	= \033[39m
GRAY		= \033[30m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m
MAGENTA		= \033[35m
CYAN		= \033[36m
WHITE		= \033[37m
