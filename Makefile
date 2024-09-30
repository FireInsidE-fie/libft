NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm
RMFLAGS=-rf
AR=ar
ARFLAGS=-rcs
SRCS=ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memset.c \
	  ft_strchr.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
	  ft_toupper.c
OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	$(RM) $(RMFLAGS) $(OBJS)
fclean: clean
	$(RM) $(RMFLAGS) $(NAME)
re: fclean all

.PHONY: all clean fclean re
