ifeq ($(HOSTTYPE),)
HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

LINK_NAME := libft_malloc.so
NAME = libft_malloc_$(HOSTTYPE).so

SRCS =							\
		srcs/free/free.c		\
		srcs/malloc/malloc.c	\
		srcs/realloc/realloc.c	\

OBJS = $(SRCS:%.c=objs/%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -fPIC
CFLAGS += -I inc
CFLAGS += -I libft

$(NAME): objs $(SRCS) $(LINK_NAME)
	@ln -fs $(LINK_NAME) $(NAME)

$(LINK_NAME): $(OBJS)
	$(CC) $(CFLAGS) -shared -o $@ $(OBJS) 

objs:
	@mkdir -p objs/srcs/free objs/srcs/malloc objs/srcs/realloc

objs/%.o: %.c
	$(CC) $(CFLAGS) -c $<  -o $@

all: $(NAME)

clean:
	@rm -rf objs
	@rm -f $(LINK_NAME)

fclean: clean
	rm -rf $(NAME)

test: all
	@gcc main.c $(LINK_NAME) -o test && ./test && rm test

re:: fclean
re:: all

.PHONY: all clean fclean re
