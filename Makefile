ifeq ($(HOSTTYPE),)
HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

NAME = libft_malloc_$(HOSTTYPE).so

SRCS =							\
		srcs/free/free.c		\
		srcs/malloc/malloc.c	\
		srcs/realloc/realloc.c	\

OBJS = $(SRCS:%.c=objs/%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror
CFLAGS += -I inc

$(NAME): objs $(OBJS)
	ar -rcs $(NAME) $(OBJS)

objs:
	mkdir -p objs/srcs/free objs/srcs/malloc objs/srcs/realloc

objs/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf objs

fclean: clean
	rm -rf $(NAME)

re:: fclean
re:: all

.PHONY: all clean fclean re
