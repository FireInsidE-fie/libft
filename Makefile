NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm
RMFLAGS=-f
AR=ar
ARFLAGS=-rc
SRCS=ft_atoi.c \
	 ft_bzero.c \
	 ft_isalnum.c \
	 ft_isalpha.c \
	 ft_isascii.c \
	 ft_isdigit.c \
	 ft_isprint.c \
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_memcpy.c \
	 ft_memmove.c \
	 ft_memset.c \
	 ft_strchr.c \
	 ft_strlen.c \
	 ft_strnstr.c \
	 ft_strrchr.c \
	 ft_tolower.c \
	 ft_toupper.c
OBJS=$(SRCS:.c=.o)
INCL=libft.h

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -include $(INCL) -c $< -o $@ 
clean:
	$(RM) $(RMFLAGS) $(OBJS)
fclean: clean
	$(RM) $(RMFLAGS) $(NAME)
re: fclean all

.PHONY: all clean fclean re
