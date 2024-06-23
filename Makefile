NAME	= libft.a
M_SRCS	= ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c \
			ft_putendl_fd.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c \
			ft_strtrim.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isprint.c \
			ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c \
			ft_strlen.c ft_strnstr.c ft_substr.c ft_calloc.c ft_isascii.c \
			ft_itoa.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c \
			ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c
B_SRCS	= $(M_SRCS) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
M_OBJS	= $(M_SRCS:.c=.o)
B_OBJS	= $(B_SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(M_OBJS)
	ar -rc $(NAME) $(M_OBJS)

bonus: $(B_OBJS)
	ar -rc $(NAME) $(B_OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
