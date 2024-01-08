SRCS = main.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM_RF = rm -rf
NAME = philo

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM_RF) $(OBJS)

fclean:
	$(RM_RF) $(OBJS) $(NAME)

re: fclean all

.PHONY: clean fclean all re