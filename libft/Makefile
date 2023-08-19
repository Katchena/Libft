NAME = libft.a
SRC =		ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_putptr.c \
		ft_putnbr.c \
		ft_putu.c \
		ft_puthex.c \
		ft_puthexup.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strncmp.c \
		get_next_line_bonus \
		get_next_line_bonus_utils
OBJ	=	$(SRC:.c=.o)
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
AR	=	ar crs
RM	=	rm -f

.c.o:
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJ)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
